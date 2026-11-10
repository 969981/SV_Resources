/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003cf740; name: FUN_003cf740
 */


undefined8 FUN_003cf740(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_18 [8];
  
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  switch(param_1[0x17]) {
  case 0x13:
    iVar1 = FUN_003c4820(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    uVar3 = FUN_003acde0(param_1);
    iVar1 = (int)uVar3;
    goto joined_r0x003cf99c;
  case 0x15:
    iVar1 = FUN_003c4820(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    if ((*param_1 == 0x100) || (uVar3 = FUN_003acde0(param_1), (int)uVar3 != 0)) {
      param_1[0x1ac] = 1;
      return 2;
    }
    return uVar3;
  case 0x16:
    if ((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) != 0) {
      return 2;
    }
    iVar1 = **(int **)(param_1 + 2);
    if (iVar1 < 0x304) {
      return 2;
    }
    if (iVar1 == 0x10000) {
      return 2;
    }
    if (param_1[0x168] != 1) {
      if ((((uint)param_1[0x1a5] >> 0x14 & 1) != 0) && (param_1[0x168] != 2)) {
        return 2;
      }
      goto switchD_003cf774_caseD_23;
    }
    if (((uint)param_1[0x1a5] >> 0x14 & 1) != 0) {
      return 2;
    }
  case 0x1a:
    iVar1 = FUN_003c4820(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    break;
  case 0x19:
    if ((param_1[0x226] == 3) && (iVar1 = FUN_003c4820(param_1), iVar1 != 1)) {
      return 3;
    }
    break;
  case 0x21:
    piVar2 = __errno_location();
    *piVar2 = 0;
    if (((((*(byte *)(*(long *)(*(int **)(param_1 + 2) + 0x30) + 0x60) >> 3 & 1) == 0) &&
         (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) &&
       (iVar1 = FUN_003c4820(param_1), iVar1 != 1)) {
      iVar1 = FUN_003b51b0(param_1,0);
      if (iVar1 != 5) {
        return 3;
      }
      piVar2 = __errno_location();
      if ((*piVar2 == 0x68) || (*piVar2 == 0x20)) {
        param_1[10] = 1;
        return 2;
      }
      return 3;
    }
    break;
  case 0x23:
switchD_003cf774_caseD_23:
    if (param_1[0x168] == 1) {
      iVar1 = FUN_003c4820(param_1);
      if (iVar1 == 0) {
        return 3;
      }
      return 2;
    }
    lVar4 = *(long *)(*(int **)(param_1 + 2) + 0x30);
    if ((((*(byte *)(lVar4 + 0x60) >> 3 & 1) != 0) ||
        (iVar1 = **(int **)(param_1 + 2), iVar1 < 0x304)) || (iVar1 == 0x10000)) {
      uVar3 = (**(code **)(lVar4 + 0x20))(param_1,0x22);
      if ((int)uVar3 == 0) {
        return uVar3;
      }
      if ((*(byte *)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x60) >> 3 & 1) == 0) {
        return 2;
      }
      FUN_003a4290(param_1,2);
      return 2;
    }
    uVar3 = (**(code **)(lVar4 + 0x10))(param_1);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa2);
    if ((int)uVar3 == 0) {
      return uVar3;
    }
    if ((param_1[0x1f6] == 2) ||
       (uVar3 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa1),
       (int)uVar3 != 0)) {
      param_1[0x20] = 1;
      return 2;
    }
    return uVar3;
  case 0x24:
    iVar1 = FUN_003c4820(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    lVar4 = *(long *)(*(int **)(param_1 + 2) + 0x30);
    if ((((*(byte *)(lVar4 + 0x60) >> 3 & 1) == 0) &&
        (iVar1 = **(int **)(param_1 + 2), 0x303 < iVar1)) && (iVar1 != 0x10000)) {
      iVar1 = (**(code **)(lVar4 + 0x18))(param_1,param_1 + 0x6f,param_1 + 0x5f,0,auStack_18);
      if ((iVar1 == 0) ||
         (iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0x122),
         iVar1 == 0)) {
        return 0;
      }
      if ((*(long *)(param_1 + 0x218) != 0) && (param_1[0x1f6] == 2)) {
        param_1[0x21] = 0xc;
        iVar1 = (**(code **)(*(long *)(*(long *)(param_1 + 2) + 0xc0) + 0x20))(param_1,0xa1);
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
    break;
  case 0x2a:
    iVar1 = FUN_003c4820(param_1);
    if (iVar1 != 1) {
      return 3;
    }
    uVar3 = FUN_003dc730(param_1,1);
    iVar1 = (int)uVar3;
joined_r0x003cf99c:
    if (iVar1 == 0) {
      return uVar3;
    }
  }
  return 2;
}


