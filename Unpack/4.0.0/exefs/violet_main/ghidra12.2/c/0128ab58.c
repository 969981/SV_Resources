/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0128ab58; name: FUN_0128ab58
 */


bool FUN_0128ab58(long param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  undefined1 *puVar5;
  char cVar6;
  
  if (param_2 == 0) {
    return false;
  }
  if (param_3 == 0) {
    return false;
  }
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50));
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2 & 0xff;
    if (4 < (int)*puVar2) {
      uVar4 = 0;
    }
  }
  if (iVar1 == 2) {
    if (4 < uVar4) goto LAB_0128ac90;
    cVar6 = (&DAT_03d6a45a)[uVar4];
  }
  else {
    if (iVar1 == 1) {
      if (uVar4 < 5) {
        puVar5 = &DAT_03d6a455;
        goto LAB_0128ac28;
      }
    }
    else if ((iVar1 == 0) && (uVar4 < 5)) {
      puVar5 = &DAT_03d6a450;
LAB_0128ac28:
      cVar6 = puVar5[uVar4];
      goto LAB_0128abbc;
    }
LAB_0128ac90:
    cVar6 = '\x02';
  }
LAB_0128abbc:
  iVar1 = *(int *)(*(long *)(param_1 + 8) + 0x36c);
  puVar2 = (uint *)FUN_011e2dd4(*(undefined8 *)(*(long *)(param_1 + 8) + 0x50),param_3);
  if (puVar2 == (uint *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *puVar2 & 0xff;
    if (4 < (int)*puVar2) {
      uVar4 = 0;
    }
  }
  if (iVar1 == 2) {
    if (uVar4 < 5) {
      cVar3 = (&DAT_03d6a45a)[uVar4];
      goto LAB_0128abf8;
    }
  }
  else if (iVar1 == 1) {
    if (uVar4 < 5) {
      puVar5 = &DAT_03d6a455;
      goto LAB_0128ac48;
    }
  }
  else if ((iVar1 == 0) && (uVar4 < 5)) {
    puVar5 = &DAT_03d6a450;
LAB_0128ac48:
    cVar3 = puVar5[uVar4];
    goto LAB_0128abf8;
  }
  cVar3 = '\x02';
LAB_0128abf8:
  return cVar6 == cVar3;
}


