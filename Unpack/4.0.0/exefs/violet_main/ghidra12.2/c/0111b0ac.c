/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0111b0ac; name: FUN_0111b0ac
 */


void FUN_0111b0ac(undefined4 *param_1,ulong *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = *param_2;
  if (uVar4 < 0x80) {
    plVar2 = param_3 + 2;
    *(char *)(*param_3 + *plVar2) = (char)uVar4;
    uVar1 = (uint)uVar4 & 0xff;
    lVar3 = *plVar2 + 1;
    *plVar2 = lVar3;
    if (3 < uVar1 - 0x80) goto LAB_0111b17c;
    uVar4 = *param_2;
    switch(uVar1) {
    case 0x80:
      goto switchD_0111b0fc_caseD_80;
    case 0x81:
      goto switchD_0111b0fc_caseD_81;
    case 0x82:
switchD_0111b0fc_caseD_82:
      *(int *)(*param_3 + lVar3) = (int)uVar4;
      lVar3 = 4;
      break;
    case 0x83:
switchD_0111b0fc_caseD_83:
      *(ulong *)(*param_3 + lVar3) = uVar4;
      lVar3 = 8;
    }
  }
  else if (uVar4 < 0x100) {
    plVar2 = param_3 + 2;
    *(undefined1 *)(*param_3 + *plVar2) = 0x80;
    lVar3 = *plVar2 + 1;
    *plVar2 = lVar3;
    uVar4 = *param_2;
switchD_0111b0fc_caseD_80:
    *(char *)(*param_3 + lVar3) = (char)uVar4;
    lVar3 = 1;
  }
  else {
    if (uVar4 >> 0x10 != 0) {
      if (uVar4 >> 0x20 != 0) {
        *(undefined1 *)(*param_3 + param_3[2]) = 0x83;
        lVar3 = param_3[2] + 1;
        param_3[2] = lVar3;
        uVar4 = *param_2;
        goto switchD_0111b0fc_caseD_83;
      }
      *(undefined1 *)(*param_3 + param_3[2]) = 0x82;
      lVar3 = param_3[2] + 1;
      param_3[2] = lVar3;
      uVar4 = *param_2;
      goto switchD_0111b0fc_caseD_82;
    }
    plVar2 = param_3 + 2;
    *(undefined1 *)(*param_3 + *plVar2) = 0x81;
    lVar3 = *plVar2 + 1;
    *plVar2 = lVar3;
    uVar4 = *param_2;
switchD_0111b0fc_caseD_81:
    *(short *)(*param_3 + lVar3) = (short)uVar4;
    lVar3 = 2;
  }
  param_3[2] = param_3[2] + lVar3;
LAB_0111b17c:
  *param_1 = 0;
  return;
}


