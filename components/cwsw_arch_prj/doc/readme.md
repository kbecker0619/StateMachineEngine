MCU Architecture Support

The Includes structure here is slightly different than in other CWSW components designed for reuse / multiple deployments

In most components, the main API is published at the root of the component folder; any local-to-component headers are located within appropriate subfolders.

For this component, the main API is at the root of the architecture-specific folder. While there is an API file that exposes all APIs common to all architectures located at the component root, this is not intended to be used by projects that use the Architecture-Support component.

