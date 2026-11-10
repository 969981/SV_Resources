/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f23f2c; name: FUN_02f23f2c
 */


void FUN_02f23f2c(undefined8 *param_1)

{
  undefined *puVar1;
  void *__dest;
  uint uVar2;
  
  puVar1 = PTR_PTR_047d1a50;
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (0xff < (int)uVar2) {
    uVar2 = 0x100;
  }
  __dest = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))(PTR_PTR_047d1a50,0x800);
  memcpy(__dest,(void *)*param_1,-(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3);
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1,*param_1,(long)*(int *)((long)param_1 + 0xc) << 3);
  *param_1 = __dest;
  *(undefined4 *)((long)param_1 + 0xc) = 0x100;
  return;
}


