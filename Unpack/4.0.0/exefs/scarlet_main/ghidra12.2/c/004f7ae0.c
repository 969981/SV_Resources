/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 004f7ae0; name: FUN_004f7ae0
 */


undefined8 FUN_004f7ae0(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long local_50;
  undefined *puStack_48;
  undefined **local_40;
  undefined1 *puStack_38;
  undefined ***local_28;
  
  puVar4 = *(ulong **)(param_3 + 0x30);
  if ((puVar4 != (ulong *)0x0) &&
     (puStack_48 = PTR_LAB_047cd728, local_50 = param_3, *puVar4 != 0xffffffffffffffff)) {
    local_40 = &puStack_48;
    local_28 = &local_40;
    puStack_38 = (undefined1 *)&local_50;
    std::__call_once(puVar4,&local_28,(_func_void_void_ptr *)&LAB_004f9a40);
  }
  if (param_4 == 0) {
    param_4 = *(long *)(param_1 + 0x40);
    cVar2 = *(char *)(param_3 + 0x43);
  }
  else {
    cVar2 = *(char *)(param_3 + 0x43);
  }
  if (cVar2 != '\0') {
    uVar5 = FUN_004ee2cc(param_2 + (ulong)*(uint *)(param_1 + 0x28),param_3,param_4);
    return uVar5;
  }
  lVar6 = *(long *)(param_3 + 0x58);
  if (*(int *)(param_3 + 0x3c) == 3) {
LAB_004f7bf8:
    if (lVar6 == 0) goto LAB_004f7c4c;
  }
  else if ((lVar6 == 0) ||
          ((*(int *)(lVar6 + 0x18) == 1 && (*(char *)(**(long **)(lVar6 + 0x20) + 0x41) != '\0'))))
  {
    if (*(uint *)(param_1 + 0x20) != 0xffffffff) {
      lVar1 = param_2 + (ulong)*(uint *)(param_1 + 0x20);
      uVar3 = (int)((ulong)(param_3 - *(long *)(*(long *)(param_3 + 0x50) + 0x28)) >> 3) *
              0x286bca1b;
      uVar3 = *(uint *)(*(long *)(param_1 + 0x18) +
                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar3 << 2));
      uVar7 = (ulong)(uVar3 >> 3) & 0x1ffffffc;
      *(uint *)(lVar1 + uVar7) =
           *(uint *)(lVar1 + uVar7) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
    }
    goto LAB_004f7bf8;
  }
  if ((*(int *)(lVar6 + 0x18) != 1) || (*(char *)(**(long **)(lVar6 + 0x20) + 0x41) == '\0')) {
    uVar7 = (ulong)(uint)(*(int *)(param_1 + 0x2c) +
                         (int)((ulong)(lVar6 - *(long *)(*(long *)(lVar6 + 0x10) + 0x30)) >> 4) *
                         -0x55555554);
    if (*(int *)(param_2 + uVar7) != *(int *)(param_3 + 0x44)) {
      return 0;
    }
    *(undefined4 *)(param_2 + uVar7) = 0;
  }
LAB_004f7c4c:
  uVar7 = FUN_004fa4b0(param_1 + 8,param_3);
  uVar5 = *(undefined8 *)(param_2 + (uVar7 & 0xffffffff));
  *(undefined8 *)(param_2 + (uVar7 & 0xffffffff)) = 0;
  return uVar5;
}


