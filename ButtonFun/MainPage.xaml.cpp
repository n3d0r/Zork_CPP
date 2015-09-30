//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"
#include <vector>
#include <string>

using namespace ButtonFun;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409
/*
Platform::String pictures[2][5] = 
{
	{ "Baseball ignis.png", "ms-appx:///Assets/klYes9w.jpg", "ms-appx:///Assets/klYes9w.jpg", "ms-appx:///Assets/klYes9w.jpg", "ms-appx:///Assets/klYes9w.jpg" },
	{"","","","",""}
};*/

MainPage::MainPage()
{
	InitializeComponent();

}


void ButtonFun::MainPage::TestButton_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

	auto bitmapImage = ref new Windows::UI::Xaml::Media::Imaging::BitmapImage();
	auto uri = ref new Windows::Foundation::Uri("ms-appx:///Assets/troll.jpg");
	bitmapImage->UriSource = uri;
	areaImage->Source = bitmapImage;
	areaText->Text = "A troll ate your face, ha ha ha...... you are dead, how boring";
	
}



void ButtonFun::MainPage::buttonNorth_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto bitmapImage = ref new Windows::UI::Xaml::Media::Imaging::BitmapImage();
	auto uri = ref new Windows::Foundation::Uri("ms-appx:///Assets/excallibur.jpg");
	bitmapImage->UriSource = uri;
	areaImage->Source = bitmapImage;
	areaText->Text = "Congratulation you found the legendary sword excallibur, you won the game and the kingdom";
}


void ButtonFun::MainPage::buttonEast_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	auto bitmapImage = ref new Windows::UI::Xaml::Media::Imaging::BitmapImage();
	auto uri = ref new Windows::Foundation::Uri("ms-appx:///Assets/waterfall.jpg");
	bitmapImage->UriSource = uri;
	areaImage->Source = bitmapImage;
	areaText->Text = "It is a beautiful view, but a dead end. You need to go back and choose another path.";
}


void ButtonFun::MainPage::buttonSouth_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{

}
