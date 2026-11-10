/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
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


