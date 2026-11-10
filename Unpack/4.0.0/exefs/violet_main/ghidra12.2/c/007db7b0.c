/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007db7b0; name: FUN_007db7b0
 */


undefined8 FUN_007db7b0(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  if ((*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) && (*(char *)(param_1 + 0x68) == '\0')) {
    uVar2 = FUN_007d46b0();
    lVar6 = *(long *)(param_1 + 0x58);
    if ((uVar2 & 1) == 0) {
      lVar4 = FUN_007ec50c(lVar6);
      if (lVar4 != 0) {
        lVar4 = FUN_007ec50c(lVar6);
        lVar6 = FUN_007ec4a8(lVar6);
        if (lVar4 == lVar6) {
          uVar7 = *(undefined8 *)(param_1 + 0x60);
          local_48[0] = CONCAT44(local_48[0]._4_4_,0x2c18);
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
          FUN_00cbd7c0(auStack_38,local_48);
          FUN_0078cb94(uVar7,auStack_38);
          *(undefined8 *)(param_1 + 0x60) = 0;
          return 1;
        }
      }
      if (*(char *)(param_1 + 0x69) == '\0') {
        local_48[0] = 0;
        FUN_007935cc(local_48);
        if (local_48[0] < *(ulong *)(param_1 + 0x70)) {
          return 5;
        }
        iVar1 = *(int *)(param_1 + 0x6c);
        *(int *)(param_1 + 0x6c) = iVar1 + 1;
        if (iVar1 < 3) {
          *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1348;
          *(undefined8 *)(param_1 + 0x38) = 0;
          pcVar5 = "LeaveMeshJob::SendLeaveRequest";
          goto LAB_007db89c;
        }
      }
    }
    else {
      FUN_007dbd90(*(undefined8 *)(lVar6 + 0xc0));
      plVar3 = *(long **)(*(long *)(param_1 + 0x58) + 0xc0);
      (**(code **)(*plVar3 + 0x10))(plVar3,0);
    }
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1350;
  *(undefined8 *)(param_1 + 0x38) = 0;
  pcVar5 = "LeaveMeshJob::CompleteProcess";
LAB_007db89c:
  *(char **)(param_1 + 0x40) = pcVar5;
  return 0;
}


