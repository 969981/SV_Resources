/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eaf920; name: FUN_01eaf920
 */


void FUN_01eaf920(long param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  long *plVar7;
  char local_80 [8];
  undefined8 local_78;
  byte local_70;
  long local_68 [4];
  int local_48 [2];
  
  if (*(long *)(param_1 + 0x50) == 0) {
    return;
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x50) + 0x10);
  if (lVar5 == 0) {
    return;
  }
  plVar7 = (long *)(lVar5 + -0x28);
  FUN_016947d8(local_68);
  local_48[0] = 7;
  if (local_68[0] != 0) {
    FUN_01eaf354(local_80,local_48,local_68[0] + 8);
  }
  cVar1 = (char)param_2;
  local_70 = *(byte *)(param_1 + param_2 + 0xacd) ^ 1;
  local_78 = *param_3;
  local_80[0] = cVar1;
  if (local_68[0] != 0) {
    FUN_01eb0364(local_48,local_80,local_68[0] + 8);
  }
  uVar2 = FUN_014c27b0(local_68);
  uVar3 = FUN_014c27c8(local_68);
  uVar4 = (**(code **)(*plVar7 + 0x70))(plVar7,uVar2,uVar3);
  if ((uVar4 & 1) == 0) {
    if (*(char *)(param_1 + 0xb18) != param_2) {
      if (*(char *)(param_1 + 0xb18) == -1) {
        pcVar6 = (char *)(param_1 + 0xb18);
      }
      else {
        if (*(char *)(param_1 + 0xb30) == param_2) goto LAB_01eafa10;
        if (*(char *)(param_1 + 0xb30) == -1) {
          pcVar6 = (char *)(param_1 + 0xb30);
        }
        else {
          if (*(char *)(param_1 + 0xb48) == param_2) goto LAB_01eafa10;
          if (*(char *)(param_1 + 0xb48) == -1) {
            pcVar6 = (char *)(param_1 + 0xb48);
          }
          else {
            if ((*(char *)(param_1 + 0xb60) != -1) || (param_2 == -1)) goto LAB_01eafa10;
            pcVar6 = (char *)(param_1 + 0xb60);
          }
        }
      }
      *pcVar6 = cVar1;
      *(undefined8 *)(pcVar6 + 8) = *param_3;
    }
  }
  else {
    *(undefined1 *)(param_1 + param_2 + 0xacd) = 1;
    if (((*(long *)(param_1 + 0x38) != 0) &&
        (lVar5 = *(long *)(*(long *)(param_1 + 0x38) + 0x10), lVar5 != 0)) &&
       (uVar4 = FUN_00ea2b08(lVar5 + -0x28), (uVar4 & 1) != 0)) {
      local_48[0] = (int)local_80[0];
      FUN_01eb03e4(param_1 + 0x78,local_48);
    }
    if (*(char *)(param_1 + 0xb18) == param_2) {
      pcVar6 = (char *)(param_1 + 0xb18);
    }
    else if (*(char *)(param_1 + 0xb30) == param_2) {
      pcVar6 = (char *)(param_1 + 0xb30);
    }
    else if (*(char *)(param_1 + 0xb48) == param_2) {
      pcVar6 = (char *)(param_1 + 0xb48);
    }
    else {
      pcVar6 = (char *)(param_1 + 0xb60);
      if (*pcVar6 != param_2) goto LAB_01eafa10;
    }
    *pcVar6 = -1;
  }
LAB_01eafa10:
  FUN_01694aa8(local_68);
  return;
}


