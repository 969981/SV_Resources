/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01eb7b5c; name: FUN_01eb7b5c
 */


void FUN_01eb7b5c(undefined4 *param_1,uint *param_2,long *param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  uint uVar4;
  
  uVar1 = *param_2;
  if (uVar1 + 0x40 < 0xc0) {
    plVar2 = param_3 + 2;
    *(char *)(*param_3 + *plVar2) = (char)uVar1;
    lVar3 = *plVar2 + 1;
    *plVar2 = lVar3;
    uVar4 = *param_2;
    uVar1 = uVar1 & 0xff;
    if (uVar1 == 0x85) {
LAB_01eb7c18:
      *(short *)(*param_3 + lVar3) = (short)uVar4;
      lVar3 = 2;
    }
    else {
      if (uVar1 != 0x86) {
        if (uVar1 != 0x84) goto LAB_01eb7ba8;
        goto LAB_01eb7bdc;
      }
LAB_01eb7c4c:
      *(uint *)(*param_3 + lVar3) = uVar4;
      lVar3 = 4;
    }
  }
  else {
    if (uVar1 != (int)(char)uVar1) {
      if (uVar1 != (int)(short)uVar1) {
        *(undefined1 *)(*param_3 + param_3[2]) = 0x86;
        lVar3 = param_3[2] + 1;
        param_3[2] = lVar3;
        uVar4 = *param_2;
        goto LAB_01eb7c4c;
      }
      *(undefined1 *)(*param_3 + param_3[2]) = 0x85;
      lVar3 = param_3[2] + 1;
      param_3[2] = lVar3;
      uVar4 = *param_2;
      goto LAB_01eb7c18;
    }
    plVar2 = param_3 + 2;
    *(undefined1 *)(*param_3 + *plVar2) = 0x84;
    lVar3 = *plVar2 + 1;
    *plVar2 = lVar3;
    uVar4 = *param_2;
LAB_01eb7bdc:
    *(char *)(*param_3 + lVar3) = (char)uVar4;
    lVar3 = 1;
  }
  param_3[2] = param_3[2] + lVar3;
LAB_01eb7ba8:
  *param_1 = 0;
  return;
}


