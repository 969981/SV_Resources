/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00122d70; name: FUN_00122d70
 */


void FUN_00122d70(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  
  lVar1 = FUN_0013c0f0(param_1,param_3);
  if ((char)param_2[1] == 'E') {
    puVar2 = (undefined8 *)FUN_0013d320(*param_2,lVar1);
    if ((*(byte *)(puVar2 + 1) & 0xf) != 0) {
      lVar1 = *(long *)(param_1 + 0x10);
      *puVar2 = *(undefined8 *)(lVar1 + -0x10);
      *(undefined1 *)(puVar2 + 1) = *(undefined1 *)(lVar1 + -8);
      lVar1 = *(long *)(param_1 + 0x10);
      if ((((*(byte *)(lVar1 + -8) >> 6 & 1) != 0) && ((*(byte *)(*param_2 + 9) >> 5 & 1) != 0)) &&
         ((*(byte *)(*(long *)(lVar1 + -0x10) + 9) & 0x18) != 0)) {
        FUN_00129f00(param_1);
        lVar1 = *(long *)(param_1 + 0x10);
      }
      lVar1 = lVar1 + -0x10;
      goto LAB_00122e50;
    }
  }
  else {
    puVar2 = (undefined8 *)0x0;
  }
  plVar4 = (long *)(param_1 + 0x10);
  plVar3 = (long *)*plVar4;
  *plVar3 = lVar1;
  *(byte *)(plVar3 + 1) = *(byte *)(lVar1 + 8) | 0x40;
  lVar1 = *plVar4;
  *plVar4 = lVar1 + 0x10;
  FUN_00140220(param_1,param_2,lVar1,lVar1 + -0x10,puVar2);
  lVar1 = *plVar4 + -0x20;
LAB_00122e50:
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}


