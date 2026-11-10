/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00800bac; name: FUN_00800bac
 */


undefined8 FUN_00800bac(long param_1)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_88 [16];
  undefined1 auStack_78 [16];
  undefined4 local_68 [4];
  undefined1 auStack_58 [16];
  undefined4 local_48 [2];
  
  lVar8 = *(long *)(param_1 + 0x58);
  nn::os::LockMutex((MutexType *)(lVar8 + 0x1378));
  lVar2 = FUN_00801364(*(undefined8 *)(lVar8 + 0x1308));
  if (lVar2 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    local_68[0] = 0xc480;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
    FUN_00cbd7c0(auStack_58,local_68);
    puVar5 = auStack_58;
LAB_00800cec:
    FUN_0078cb94(uVar7,puVar5);
  }
  else {
    lVar2 = FUN_00801364(*(undefined8 *)(lVar8 + 0x1308));
    uVar1 = *(ushort *)(lVar8 + 0x114e);
    if (uVar1 != 0) {
      iVar6 = 0;
      lVar9 = *(long *)(*(long *)(lVar8 + 0x1308) + 0x18);
      plVar3 = (long *)FUN_008013e4(*(long *)(lVar8 + 0x1308),0);
      while( true ) {
        if (((plVar3 != (long *)0x0) && (*plVar3 != lVar9)) &&
           (uVar4 = FUN_0078b278(plVar3 + 7,lVar2 + 0x38), (uVar4 & 1) != 0)) {
          uVar7 = *(undefined8 *)(param_1 + 0x60);
          local_68[0] = 0x6c8e;
          local_48[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
          FUN_00cbd7c0(auStack_78,local_68);
          puVar5 = auStack_78;
          goto LAB_00800cec;
        }
        if (uVar1 - 1 == iVar6) break;
        iVar6 = iVar6 + 1;
        plVar3 = (long *)FUN_008013e4(*(undefined8 *)(lVar8 + 0x1308),iVar6);
      }
    }
    uVar7 = *(undefined8 *)(param_1 + 0x60);
    local_68[0] = 0;
    local_48[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_68 | 4),(Result *)local_48);
    FUN_00cbd7c0(auStack_88,local_68);
    FUN_0078cb28(uVar7,auStack_88);
  }
  *(undefined8 *)(param_1 + 0x60) = 0;
  nn::os::UnlockMutex((MutexType *)(lVar8 + 0x1378));
  return 1;
}


