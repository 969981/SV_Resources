/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01f6bb28; name: FUN_01f6bb28
 */


void FUN_01f6bb28(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long *local_40 [4];
  undefined1 auStack_8 [4];
  int local_4;
  
  FUN_01267a34(local_40,param_2,param_3);
  local_4 = 0;
  if (local_40[0] == (long *)0x0) {
LAB_01f6bb78:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("0","OnInputData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/p2p/sequence_synchronizer.cpp"
               ,0x9e);
  }
  FUN_01f6bc7c(auStack_8,&local_4);
  if (local_4 == 1) {
    if (local_40[0] == (long *)0x0) {
LAB_01f6bc74:
      uVar3 = 0;
    }
    else {
      lVar6 = *local_40[0];
      lVar5 = local_40[0][2];
      lVar1 = lVar5 + 1;
      bVar2 = *(byte *)(lVar6 + lVar5);
      uVar3 = (ushort)bVar2;
      local_40[0][2] = lVar1;
      if (0x81 < bVar2) goto LAB_01f6bc74;
      if (bVar2 == 0x80) {
        uVar3 = (ushort)*(byte *)(lVar6 + lVar1);
        lVar5 = lVar5 + 2;
LAB_01f6bc4c:
        local_40[0][2] = lVar5;
      }
      else if (bVar2 == 0x81) {
        uVar3 = *(ushort *)(lVar6 + lVar1);
        lVar5 = lVar5 + 3;
        goto LAB_01f6bc4c;
      }
    }
    puVar4 = (undefined1 *)(param_1 + 0x90);
    *(ushort *)(param_1 + 0x92) = uVar3;
  }
  else {
    if (local_4 != 2) {
      if (local_4 == 0) goto LAB_01f6bb78;
      goto LAB_01f6bc1c;
    }
    if (local_40[0] == (long *)0x0) {
LAB_01f6bc6c:
      uVar3 = 0;
    }
    else {
      lVar6 = *local_40[0];
      lVar5 = local_40[0][2];
      lVar1 = lVar5 + 1;
      bVar2 = *(byte *)(lVar6 + lVar5);
      uVar3 = (ushort)bVar2;
      local_40[0][2] = lVar1;
      if (0x81 < bVar2) goto LAB_01f6bc6c;
      if (bVar2 == 0x80) {
        uVar3 = (ushort)*(byte *)(lVar6 + lVar1);
        lVar5 = lVar5 + 2;
LAB_01f6bc3c:
        local_40[0][2] = lVar5;
      }
      else if (bVar2 == 0x81) {
        uVar3 = *(ushort *)(lVar6 + lVar1);
        lVar5 = lVar5 + 3;
        goto LAB_01f6bc3c;
      }
    }
    puVar4 = (undefined1 *)(param_1 + 0x88);
    *(ushort *)(param_1 + 0x8a) = uVar3;
  }
  *puVar4 = 1;
LAB_01f6bc1c:
  FUN_01267b4c(local_40);
  return;
}


