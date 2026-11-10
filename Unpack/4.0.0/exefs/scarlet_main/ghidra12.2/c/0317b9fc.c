/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0317b9fc; name: FUN_0317b9fc
 */


undefined8 FUN_0317b9fc(long *param_1,undefined8 *param_2)

{
  void *__dest;
  void *__src;
  uint uVar1;
  long lVar2;
  void *__dest_00;
  ulong uVar3;
  void *__src_00;
  int iVar4;
  void *local_60;
  undefined8 local_58;
  
  local_60 = (void *)0x0;
  local_58 = 0x8000000000000000;
  uVar1 = *(uint *)(param_2 + 1);
  if ((int)uVar1 < 1) {
    local_60 = (void *)0x0;
    local_58 = -0x8000000000000000;
  }
  else {
    __src_00 = (void *)*param_2;
    __dest_00 = (void *)(**(code **)(*(long *)PTR_PTR_047d1a50 + 0x18))
                                  (PTR_PTR_047d1a50,(ulong)uVar1 * 0x84);
    local_58 = CONCAT44(uVar1,uVar1);
    local_60 = __dest_00;
    if (uVar1 != 1) {
      iVar4 = -(uVar1 & 0xfffffffe);
      do {
        memcpy(__dest_00,__src_00,0x84);
        __dest = (void *)((long)__dest_00 + 0x84);
        __src = (void *)((long)__src_00 + 0x84);
        __dest_00 = (void *)((long)__dest_00 + 0x108);
        __src_00 = (void *)((long)__src_00 + 0x108);
        memcpy(__dest,__src,0x84);
        iVar4 = iVar4 + 2;
      } while (iVar4 != 0);
    }
    if ((uVar1 & 1) != 0) {
      memcpy(__dest_00,__src_00,0x84);
    }
  }
  if (&local_60 != (void **)param_1) {
    *(undefined4 *)(param_1 + 1) = 0;
    if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
      (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))
                (PTR_PTR_047d1a50,*param_1,(ulong)*(uint *)((long)param_1 + 0xc) * 0x84);
    }
    *param_1 = 0;
    param_1[1] = -0x8000000000000000;
    FUN_03180bec(&local_60);
    *param_1 = (long)local_60;
    *(undefined4 *)(param_1 + 1) = (undefined4)local_58;
    *(uint *)((long)param_1 + 0xc) = local_58._4_4_;
    local_60 = (void *)0x0;
    local_58 = 0;
  }
  FUN_031807a4(param_1);
  lVar2 = local_58;
  uVar3 = (ulong)local_58._4_4_;
  local_58 = (ulong)local_58._4_4_ << 0x20;
  if ((-1 < lVar2) && (local_60 != (void *)0x0)) {
    (**(code **)(*(long *)PTR_PTR_047d1a50 + 0x20))(PTR_PTR_047d1a50,local_60,uVar3 * 0x84);
  }
  return 1;
}


