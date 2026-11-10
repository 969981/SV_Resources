/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0293f0dc; name: FUN_0293f0dc
 */


void FUN_0293f0dc(undefined8 param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  byte local_90 [4];
  undefined1 local_8c [4];
  char local_88 [40];
  
  *param_2 = 0;
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_90[0] = 0;
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  FUN_01582534();
  uVar1 = FUN_014813ec();
  FUN_02923478(uVar1,local_8c,local_90,*(undefined1 *)(param_3 + 1));
  if (local_90[0] != 0) {
    uVar4 = 0;
    do {
      uVar2 = FUN_0298818c(param_1,local_88,local_8c[uVar4],(long)param_3 + 5);
      if ((uVar2 & 1) != 0) {
        *param_2 = 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < local_90[0]);
  }
  if ((*(char *)((long)param_3 + 9) != '\0') && (uVar4 = FUN_02988224(local_88), (uVar4 & 1) != 0))
  {
    uVar1 = FUN_01243584(param_1);
    FUN_018ce0e4(uVar1,*param_3);
  }
  lVar5 = 0;
  iVar3 = 0;
  do {
    if (local_88[lVar5 * 0x13] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0);
    }
    if (local_88[lVar5 * 0x13 + 1] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,1);
    }
    if (local_88[lVar5 * 0x13 + 2] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,2);
    }
    if (local_88[lVar5 * 0x13 + 3] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,3);
    }
    if (local_88[lVar5 * 0x13 + 4] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,4);
    }
    if (local_88[lVar5 * 0x13 + 5] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,5);
    }
    if (local_88[lVar5 * 0x13 + 6] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,6);
    }
    if (local_88[lVar5 * 0x13 + 7] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,7);
    }
    if (local_88[lVar5 * 0x13 + 8] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,8);
    }
    if (local_88[lVar5 * 0x13 + 9] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,9);
    }
    if (local_88[lVar5 * 0x13 + 10] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,10);
    }
    if (local_88[lVar5 * 0x13 + 0xb] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0xb);
    }
    if (local_88[lVar5 * 0x13 + 0xc] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0xc);
    }
    if (local_88[lVar5 * 0x13 + 0xd] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0xd);
    }
    if (local_88[lVar5 * 0x13 + 0xe] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0xe);
    }
    if (local_88[lVar5 * 0x13 + 0xf] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0xf);
    }
    if (local_88[lVar5 * 0x13 + 0x10] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0x10);
    }
    if (local_88[lVar5 * 0x13 + 0x11] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0x11);
    }
    if (local_88[lVar5 * 0x13 + 0x12] != '\0') {
      uVar1 = FUN_01243584(param_1);
      FUN_0298835c(uVar1,*param_3,iVar3,0x12);
    }
    iVar3 = iVar3 + 1;
    lVar5 = 1;
  } while (iVar3 != 2);
  if ((*(char *)((long)param_3 + 9) != '\0') && (uVar4 = FUN_02988224(local_88), (uVar4 & 1) != 0))
  {
    uVar1 = FUN_01243584(param_1);
    FUN_018ce27c(uVar1,*param_3);
  }
  return;
}


