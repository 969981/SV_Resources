/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008008e4; name: FUN_008008e4
 */


ulong FUN_008008e4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_78;
  undefined1 auStack_68 [16];
  int local_58 [4];
  undefined1 auStack_48 [16];
  undefined4 local_38 [2];
  
  lVar7 = *(long *)(param_1 + 0x58);
  nn::os::LockMutex((MutexType *)(lVar7 + 0x1378));
  lVar3 = FUN_00801364(*(undefined8 *)(lVar7 + 0x1308));
  if (lVar3 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    local_58[0] = 0xc480;
    local_78 = (ulong)local_78._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)&local_78);
    FUN_00cbd7c0(auStack_48,local_58);
    puVar6 = auStack_48;
  }
  else {
    lVar3 = FUN_00801364(*(undefined8 *)(lVar7 + 0x1308));
    lVar4 = FUN_00801364(*(undefined8 *)(lVar7 + 0x1308));
    FUN_007ff4c0(local_58,lVar7,lVar3 + 0x18,lVar4 + 0x38);
    puVar1 = PTR_DAT_047d0a08;
    if (local_58[0] == 0) {
      FUN_007cd7dc(*(undefined8 *)PTR_DAT_047d0a08);
      local_78 = 0;
      FUN_007935cc(&local_78);
      iVar2 = FUN_007cd7ec(*(undefined8 *)puVar1);
      plVar5 = (long *)FUN_0079365c();
      puVar1 = PTR_FUN_047d1638;
      uVar10 = 0;
      uVar9 = 0;
      *(ulong *)(param_1 + 0x68) = local_78 + *plVar5 * (long)iVar2;
      *(char **)(param_1 + 0x40) = "NatTraversalJob::WaitNatTraversal";
      *(undefined **)(param_1 + 0x30) = puVar1;
      *(undefined8 *)(param_1 + 0x38) = 0;
      goto LAB_00800a4c;
    }
    local_78 = 0;
    FUN_007935cc(&local_78);
    if (local_78 <= *(ulong *)(param_1 + 0x68)) {
      uVar9 = 0xf0000;
      uVar10 = 4;
      goto LAB_00800a4c;
    }
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    local_78 = CONCAT44(local_78._4_4_,0x6446);
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)&local_78 | 4),(Result *)local_38);
    FUN_00cbd7c0(auStack_68,&local_78);
    puVar6 = auStack_68;
  }
  FUN_0078cb94(uVar8,puVar6);
  uVar9 = 0;
  uVar10 = 1;
  *(undefined8 *)(param_1 + 0x60) = 0;
LAB_00800a4c:
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x1378));
  return uVar9 | uVar10;
}


