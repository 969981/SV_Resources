// This headless shim reads exactly the vendored pkNX mist coordinates.
// The original AreaWeather9.cs refers to the WinForms strongly-typed resource;
// do not substitute an empty set or a synthesized weather rule.
namespace pkNX.WinForms.Properties;

internal static class Resources
{
    private static readonly Lazy<string> Fog = new(() =>
    {
        var path = Path.Combine(AppContext.BaseDirectory, "all_fog.txt");
        if (!File.Exists(path))
            throw new FileNotFoundException("Pinned pkNX mist positions missing; refuse incorrect legality data", path);
        var value = File.ReadAllText(path);
        if (string.IsNullOrWhiteSpace(value))
            throw new InvalidDataException("Pinned pkNX mist positions empty");
        return value;
    });

    public static string all_fog => Fog.Value;
}
