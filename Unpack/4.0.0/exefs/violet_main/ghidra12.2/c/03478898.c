/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03478898; name: FUN_03478898
 */


void FUN_03478898(int param_1,long param_2,int param_3,undefined8 *param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long lVar4;
  
  uVar3 = (ulong)DAT_048afd48;
  piVar2 = DAT_048afd40;
  if (DAT_048afd48 == 0) {
LAB_03478900:
    if (piVar2 != DAT_048afd40 + uVar3 * 10) {
      *param_4 = *(undefined8 *)(piVar2 + 6);
      iVar1 = piVar2[8];
      goto LAB_03478998;
    }
  }
  else {
    lVar4 = uVar3 * 0x28;
    do {
      if (((*piVar2 == param_1) && (piVar2[4] == param_3)) && (*(long *)(piVar2 + 2) == param_2))
      goto LAB_03478900;
      lVar4 = lVar4 + -0x28;
      piVar2 = piVar2 + 10;
    } while (lVar4 != 0);
  }
  if (param_2 != -1) {
    piVar2 = DAT_048afd40;
    if (DAT_048afd48 == 0) {
LAB_03478970:
      if (piVar2 != DAT_048afd40 + uVar3 * 10) {
        *param_4 = *(undefined8 *)(piVar2 + 6);
        iVar1 = piVar2[8];
        goto LAB_03478998;
      }
    }
    else {
      lVar4 = uVar3 * 0x28;
      do {
        if (((*piVar2 == param_1) && (piVar2[4] == param_3)) && (*(long *)(piVar2 + 2) == -1))
        goto LAB_03478970;
        lVar4 = lVar4 + -0x28;
        piVar2 = piVar2 + 10;
      } while (lVar4 != 0);
    }
  }
  iVar1 = 0;
  *param_4 = 0;
LAB_03478998:
  *param_5 = iVar1;
  return;
}


