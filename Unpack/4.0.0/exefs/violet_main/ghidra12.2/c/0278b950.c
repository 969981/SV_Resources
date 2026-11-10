/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0278b950; name: FUN_0278b950
 */


undefined8 FUN_0278b950(void)

{
  undefined8 uVar1;
  
  if (DAT_047ecd84 == 0) {
    FUN_001ec2c0(&LAB_02bdce00,&LAB_0278ba00,&LAB_02bdce20,&LAB_02bdcf80,&LAB_02bdcff0);
    uVar1 = FUN_001c3b1c(3,0);
    return uVar1;
  }
  DAT_047ecd84 = DAT_047ecd84 + 1;
  return 0;
}


