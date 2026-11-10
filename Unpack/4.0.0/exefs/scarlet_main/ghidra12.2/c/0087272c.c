/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0087272c; name: FUN_0087272c
 */


undefined4
FUN_0087272c(long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4,
            undefined8 *param_5)

{
  long lVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  undefined4 local_1890 [4];
  undefined8 local_1880;
  undefined8 uStack_1878;
  undefined8 local_1870;
  undefined1 *local_1860 [2];
  undefined8 local_1850;
  undefined8 uStack_1848;
  undefined8 local_1840;
  undefined4 local_1838;
  undefined1 *local_1830;
  undefined8 local_1828;
  undefined1 auStack_1820 [6144];
  
  local_1860[0] = (undefined1 *)local_1890;
  local_1890[0] = 0xffffffff;
  uStack_1848 = param_2[1];
  local_1880 = *param_2;
  fVar3 = (float)*param_3;
  fVar4 = (float)((ulong)*param_3 >> 0x20);
  fVar3 = fVar3 * fVar3;
  local_1840 = CONCAT44(fVar4 * fVar4,fVar3);
  uStack_1878 = CONCAT44(fVar3,(int)uStack_1848);
  local_1830 = auStack_1820;
  local_1838 = 0;
  local_1828 = -0x7fffff8000000000;
  local_1870 = param_4;
  local_1850 = local_1880;
  FUN_008735f4(*(long *)(param_1 + 0x18) + 0x20,&local_1830,local_1860);
  lVar1 = local_1828;
  uVar2 = (ulong)local_1828._4_4_;
  local_1828 = (ulong)local_1828._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_1830 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1830,uVar2 * 0x30);
  }
  param_5[1] = uStack_1878;
  *param_5 = local_1880;
  return local_1890[0];
}


