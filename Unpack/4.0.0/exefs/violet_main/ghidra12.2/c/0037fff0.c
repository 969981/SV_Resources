/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0037fff0; name: FUN_0037fff0
 */


int FUN_0037fff0(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  
  iVar2 = -6;
  if (((param_3 != (char *)0x0) && (param_4 == 0x70)) && (*param_3 == '1')) {
    if (param_1 == 0) {
      iVar2 = -2;
    }
    else {
      pcVar4 = *(code **)(param_1 + 0x40);
      *(undefined8 *)(param_1 + 0x30) = 0;
      puVar1 = PTR_FUN_047ccf90;
      if (pcVar4 == (code *)0x0) {
        *(undefined **)(param_1 + 0x40) = PTR_FUN_047ccf90;
        *(undefined8 *)(param_1 + 0x50) = 0;
        lVar5 = *(long *)(param_1 + 0x48);
        pcVar4 = (code *)puVar1;
      }
      else {
        lVar5 = *(long *)(param_1 + 0x48);
      }
      if (lVar5 == 0) {
        *(undefined **)(param_1 + 0x48) = PTR_LAB_047ccf98;
      }
      plVar3 = (long *)(*pcVar4)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
      if (plVar3 == (long *)0x0) {
        iVar2 = -4;
      }
      else {
        *(long **)(param_1 + 0x38) = plVar3;
        *plVar3 = param_1;
        plVar3[9] = 0;
        *(undefined4 *)(plVar3 + 1) = 0x3f34;
        iVar2 = FUN_0037fe80(param_1,param_2);
        if (iVar2 != 0) {
          (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar3);
          *(undefined8 *)(param_1 + 0x38) = 0;
        }
      }
    }
  }
  return iVar2;
}


