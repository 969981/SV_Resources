/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02fe5cf8; name: FUN_02fe5cf8
 */


long FUN_02fe5cf8(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined8 param_6,int *param_7,int *param_8)

{
  undefined4 uVar1;
  char cVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  
  if ((DAT_0486b4d8 == '\0') && (FUN_0084dd60(&DAT_0486b4d8), DAT_0486b4d8 == '\0')) {
    param_5 = 0;
  }
  else {
    puVar3 = PTR_DAT_047e48d8;
    lVar4 = *(long *)(param_4 + 0x18);
    if ((*(ulong *)(lVar4 + 0x10) < *(ulong *)(lVar4 + 0x20)) && (*(int *)(param_2 + 0x7a0) != 0)) {
      lVar6 = (long)*(int *)(param_2 + 0x7a0) * 4;
      puVar5 = *(undefined4 **)(param_2 + 0x798);
      while( true ) {
        lVar6 = lVar6 + -4;
        if ((lVar4 != 0) && (puVar7 = *(undefined8 **)(lVar4 + 0x10), puVar7 != (undefined8 *)0x0))
        {
          puVar8 = (undefined4 *)((long)puVar7 + 0x13U & 0xfffffffffffffffc);
          uVar9 = (long)puVar8 + 0xbU & 0xfffffffffffffff8;
          if (uVar9 <= *(ulong *)(lVar4 + 0x18)) {
            uVar1 = *puVar5;
            *(ulong *)(lVar4 + 0x10) = uVar9;
            *puVar7 = &DAT_03c1a9df;
            puVar7[1] = puVar3;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = uVar1;
            }
          }
        }
        if (lVar6 == 0) break;
        lVar4 = *(long *)(param_4 + 0x18);
        puVar5 = puVar5 + 1;
      }
    }
    cVar2 = *(char *)(param_5 + 0x18);
    do {
      FUN_02fdebec(param_2,*(undefined8 *)(param_3 + 0x10),param_4,param_5,param_6,
                   *(long *)(param_3 + 0x90) + (long)*param_7 * 0x20,
                   *(long *)(param_3 + 0x68) + (long)*param_7 * 0x20,
                   *(long *)(param_3 + 0x90) + (long)*param_8 * 0x20,
                   *(long *)(param_3 + 0x68) + (long)*param_8 * 0x20);
      param_5 = *(long *)(param_5 + 0x10);
      if (param_5 == 0) {
        return 0;
      }
    } while (*(char *)(param_5 + 0x18) == cVar2);
  }
  return param_5;
}


