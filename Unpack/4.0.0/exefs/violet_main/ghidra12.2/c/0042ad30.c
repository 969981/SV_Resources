/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0042ad30; name: FUN_0042ad30
 */


int FUN_0042ad30(undefined8 param_1,undefined8 param_2)

{
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  uint uStack_2c;
  uint local_28;
  uint uStack_24;
  uint local_20;
  uint uStack_1c;
  uint local_18;
  uint uStack_14;
  
  FUN_0042ab30(&local_50,param_1,param_2);
  FUN_0042a4b0(&local_50);
  uStack_14 = uStack_14 |
              local_18 |
              uStack_1c |
              local_20 |
              uStack_24 |
              local_28 |
              uStack_2c |
              local_30 |
              uStack_34 |
              local_38 | uStack_3c | local_40 | uStack_44 | local_48 | uStack_4c | local_50;
  return (int)(uStack_14 - 1 & (uStack_14 ^ 0xffffffff)) >> 0x1f;
}


