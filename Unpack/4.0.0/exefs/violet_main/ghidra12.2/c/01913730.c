/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01913730; name: FUN_01913730
 */


void FUN_01913730(void)

{
  if (((DAT_0485ea30 != '\0') || ((DAT_0485ea18 != 0 && (*(short *)(DAT_0485ea18 + 0x1a) != 0)))) &&
     (DAT_0485ea28 != (undefined8 *)0x0)) {
    (**(code **)*DAT_0485ea28)(DAT_0485ea28,0);
  }
  FUN_01913838();
  FUN_01913890();
  FUN_019137f0();
  FUN_01913b20();
  FUN_019137c0(DAT_0485ea40);
  FUN_019138f0();
  DAT_0485ea40 = 0;
  return;
}


