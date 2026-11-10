/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00872688; name: FUN_00872688
 */


void FUN_00872688(long param_1,undefined8 *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *local_1860;
  undefined4 local_1858;
  undefined8 local_1850;
  undefined8 uStack_1848;
  undefined8 local_1840;
  undefined8 uStack_1838;
  undefined1 *local_1830;
  undefined8 local_1828;
  undefined1 auStack_1820 [6144];
  undefined8 local_8;
  
  local_1860 = &local_8;
  local_1858 = 1;
  uStack_1848 = param_2[1];
  local_1850 = *param_2;
  uStack_1838 = param_2[3];
  local_1840 = param_2[2];
  local_1830 = auStack_1820;
  local_1828 = -0x7fffff8000000000;
  local_8 = param_3;
  FUN_008731cc(*(long *)(param_1 + 0x18) + 0x20,&local_1830,&local_1860);
  lVar1 = local_1828;
  uVar2 = (ulong)local_1828._4_4_;
  local_1828 = (ulong)local_1828._4_4_ << 0x20;
  if ((-1 < lVar1) && (local_1830 != (undefined1 *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_1830,uVar2 * 0x30);
  }
  return;
}


