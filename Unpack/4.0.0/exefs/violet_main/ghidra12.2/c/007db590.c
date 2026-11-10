/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007db590; name: FUN_007db590
 */


undefined8 FUN_007db590(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long local_48 [2];
  undefined1 auStack_38 [16];
  undefined4 local_28 [2];
  
  if ((*(int *)(*(long *)(param_1 + 0x58) + 0x784) == 0) && (*(char *)(param_1 + 0x68) == '\0')) {
    uVar1 = FUN_007d46b0();
    lVar4 = *(long *)(param_1 + 0x58);
    if ((uVar1 & 1) == 0) {
      lVar3 = FUN_007ec50c(lVar4);
      if (lVar3 != 0) {
        lVar3 = FUN_007ec50c(lVar4);
        lVar4 = FUN_007ec4a8(lVar4);
        if (lVar3 == lVar4) {
          uVar5 = *(undefined8 *)(param_1 + 0x60);
          local_48[0] = CONCAT44(local_48[0]._4_4_,0x2c18);
          local_28[0] = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_28);
          FUN_00cbd7c0(auStack_38,local_48);
          FUN_0078cb94(uVar5,auStack_38);
          *(undefined8 *)(param_1 + 0x60) = 0;
          return 1;
        }
      }
      FUN_007d777c(*(undefined8 *)(param_1 + 0x58));
      local_48[0] = 0;
      FUN_007935cc(local_48);
      plVar2 = (long *)FUN_0079365c();
      *(long *)(param_1 + 0x70) = local_48[0] + *plVar2 * 500;
      *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1358;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LeaveMeshJob::WaitLeaveResponse";
      return 5;
    }
    FUN_007dbd90(*(undefined8 *)(lVar4 + 0xc0));
    plVar2 = *(long **)(*(long *)(param_1 + 0x58) + 0xc0);
    (**(code **)(*plVar2 + 0x10))(plVar2,0);
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_047d1350;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::CompleteProcess";
  return 0;
}


