/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001f0ae8; name: FUN_001f0ae8
 */


int FUN_001f0ae8(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  int iVar7;
  undefined1 auStack_40 [16];
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    pcVar6 = "PUSH_PROMISE: stream_id == 0";
LAB_001f0b28:
    iVar3 = FUN_001f0268(param_1,param_2,0xfffffe07,pcVar6);
    iVar7 = -0x67;
    if (iVar3 < -900) {
      iVar7 = iVar3;
    }
    return iVar7;
  }
  if ((*(char *)(param_1 + 0x9aa) != '\0') || (*(int *)(param_1 + 0x984) == 0)) {
    pcVar6 = "PUSH_PROMISE: push disabled";
    goto LAB_001f0b28;
  }
  if ((uVar1 & 1) == 0) {
    pcVar6 = "PUSH_PROMISE: invalid stream_id";
    goto LAB_001f0b28;
  }
  if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
    return -0x67;
  }
  uVar2 = *(uint *)(param_2 + 0x28);
  if (((uVar2 == 0) || ((uVar2 & 1) != 0)) || ((int)uVar2 <= *(int *)(param_1 + 0x938))) {
    pcVar6 = "PUSH_PROMISE: invalid promised_stream_id";
  }
  else {
    if ((int)uVar1 <= *(int *)(param_1 + 0x934)) {
      *(uint *)(param_1 + 0x938) = uVar2;
      lVar4 = FUN_001edb18(param_1,*(undefined4 *)(param_2 + 8));
      if (((lVar4 == 0) || (*(int *)(lVar4 + 0xdc) == 3)) ||
         ((*(char *)(param_1 + 0x9a8) == '\0' ||
          (*(ulong *)(param_1 + 0x900) <= *(ulong *)(param_1 + 0x8f8))))) {
        iVar3 = FUN_001ee90c(param_1,*(undefined4 *)(param_2 + 0x28),8);
        iVar7 = -0x67;
        if (iVar3 != 0) {
          iVar7 = iVar3;
        }
        return iVar7;
      }
      if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
        FUN_001eda0c(auStack_40,*(undefined4 *)(lVar4 + 0xb8),0x10,0);
        lVar4 = FUN_001ee4f4(param_1,*(undefined4 *)(param_2 + 0x28),0,auStack_40,4,0);
        if (lVar4 == 0) {
          return -0x385;
        }
        *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x938);
        if (*(code **)(param_1 + 0x820) == (code *)0x0) {
          return 0;
        }
        iVar3 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
        iVar7 = 0;
        if (iVar3 != 0) {
          iVar7 = -0x386;
        }
        if (iVar3 != -0x209) {
          iVar3 = iVar7;
        }
        return iVar3;
      }
      pcVar6 = "PUSH_PROMISE: stream closed";
      uVar5 = 0xfffffe02;
      goto LAB_001f0bcc;
    }
    pcVar6 = "PUSH_PROMISE: stream in idle";
  }
  uVar5 = 0xfffffe07;
LAB_001f0bcc:
  iVar3 = FUN_001f0268(param_1,param_2,uVar5,pcVar6);
  iVar7 = -0x67;
  if (iVar3 < -900) {
    iVar7 = iVar3;
  }
  return iVar7;
}


