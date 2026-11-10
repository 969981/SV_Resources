/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 008006f4; name: FUN_008006f4
 */


ulong FUN_008006f4(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  char *pcVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 local_58;
  int local_50 [4];
  undefined1 auStack_40 [16];
  
  lVar7 = *(long *)(param_1 + 0x58);
  nn::os::LockMutex((MutexType *)(lVar7 + 0x1378));
  lVar2 = FUN_00801364(*(undefined8 *)(lVar7 + 0x1308));
  if (lVar2 == 0) {
    uVar8 = *(undefined8 *)(param_1 + 0x60);
    local_50[0] = 0xc480;
    local_58 = (ulong)local_58._4_4_ << 0x20;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)&local_58);
    FUN_00cbd7c0(auStack_40,local_50);
    FUN_0078cb94(uVar8,auStack_40);
    uVar9 = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
    uVar10 = 1;
  }
  else {
    lVar2 = FUN_00801364(*(undefined8 *)(lVar7 + 0x1308));
    lVar3 = FUN_00801364(*(undefined8 *)(lVar7 + 0x1308));
    FUN_007ff4c0(local_50,lVar7,lVar2 + 0x18,lVar3 + 0x38);
    puVar6 = PTR_DAT_047d0a08;
    if (local_50[0] == 0) {
      FUN_007cd7dc(*(undefined8 *)PTR_DAT_047d0a08);
      if (*(char *)(*(long *)(param_1 + 0x58) + 0x1370) != '\0') {
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      local_58 = 0;
      FUN_007935cc(&local_58);
      iVar1 = FUN_007cd7ec(*(undefined8 *)puVar6);
      plVar4 = (long *)FUN_0079365c();
      uVar10 = 0;
      pcVar5 = "NatTraversalJob::WaitNatTraversal";
      *(long *)(param_1 + 0x68) = local_58 + *plVar4 * (long)iVar1;
      uVar9 = 0;
      puVar6 = PTR_FUN_047d1638;
    }
    else {
      local_58 = 0;
      FUN_007935cc(&local_58);
      plVar4 = (long *)FUN_0079365c();
      puVar6 = PTR_FUN_047d1630;
      pcVar5 = "NatTraversalJob::RetryStartNatTraversal";
      *(long *)(param_1 + 0x68) = local_58 + *plVar4 * 15000;
      uVar9 = 0xf0000;
      uVar10 = 4;
    }
    *(undefined **)(param_1 + 0x30) = puVar6;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = pcVar5;
  }
  nn::os::UnlockMutex((MutexType *)(lVar7 + 0x1378));
  return uVar9 | uVar10;
}


