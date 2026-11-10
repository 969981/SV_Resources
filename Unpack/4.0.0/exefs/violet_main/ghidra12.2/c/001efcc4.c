/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001efcc4; name: FUN_001efcc4
 */


int FUN_001efcc4(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  uVar1 = *(uint *)(param_2 + 8);
  if (uVar1 == 0) {
    pcVar6 = "request HEADERS: stream_id == 0";
LAB_001efdd8:
    iVar3 = FUN_001f0268(param_1,param_2,0xfffffe07,pcVar6);
    iVar2 = -0x67;
    if (iVar3 < -900) {
      iVar2 = iVar3;
    }
    return iVar2;
  }
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if ((uVar1 & 1) == 0) {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    if ((int)uVar1 <= iVar2) {
      return -0x67;
    }
    pcVar6 = "request HEADERS: client received request";
    goto LAB_001efdd8;
  }
  if ((uVar1 & 1) == 0) {
    pcVar6 = "request HEADERS: invalid stream_id";
    goto LAB_001efdd8;
  }
  if (*(int *)(param_1 + 0x938) < (int)uVar1) {
    *(uint *)(param_1 + 0x938) = uVar1;
    if ((ulong)*(uint *)(param_1 + 0x988) <= *(ulong *)(param_1 + 0x8f0)) {
      pcVar6 = "request HEADERS: max concurrent streams exceeded";
      goto LAB_001efdd8;
    }
    if ((*(byte *)(param_1 + 0x9ab) & 5) != 0) {
      return -0x67;
    }
    iVar2 = *(int *)(param_2 + 8);
    if (*(int *)(param_2 + 0x18) != iVar2) {
      if (*(ulong *)(param_1 + 0x8f0) < (ulong)*(uint *)(param_1 + 0x9a0)) {
        lVar4 = FUN_001ee4f4(param_1,iVar2,0,(int *)(param_2 + 0x18),1,0);
        if (lVar4 == 0) {
          return -0x385;
        }
        iVar2 = FUN_001eec24(param_1);
        if (iVar2 < -900) {
          return iVar2;
        }
        *(undefined4 *)(param_1 + 0x93c) = *(undefined4 *)(param_1 + 0x938);
        if (*(code **)(param_1 + 0x820) == (code *)0x0) {
          return 0;
        }
        iVar3 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
        iVar2 = 0;
        if (iVar3 != 0) {
          iVar2 = -0x386;
        }
        if (iVar3 != -0x209) {
          iVar3 = iVar2;
        }
        return iVar3;
      }
      iVar2 = FUN_001f3ca0(param_1,iVar2,param_2,0xfffffdeb);
      goto LAB_001efdbc;
    }
    pcVar6 = "request HEADERS: depend on itself";
    uVar5 = 0xfffffe07;
  }
  else {
    lVar4 = FUN_001f9090(param_1);
    if (lVar4 == 0) {
      return -0x67;
    }
    if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
      return -0x67;
    }
    pcVar6 = "HEADERS: stream closed";
    uVar5 = 0xfffffe02;
  }
  iVar2 = FUN_001f0268(param_1,param_2,uVar5,pcVar6);
LAB_001efdbc:
  iVar3 = -0x67;
  if (iVar2 < -900) {
    iVar3 = iVar2;
  }
  return iVar3;
}


