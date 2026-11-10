/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0032e8a0; name: FUN_0032e8a0
 */


undefined8 FUN_0032e8a0(char *param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  int iVar4;
  char *__s2;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  undefined8 local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 *local_40;
  ulong local_38;
  
  puVar3 = DAT_047ef4b0;
  if (DAT_047ef4b0 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar6 = *DAT_047ef4b0;
  if (1 < uVar6) {
    uVar9 = 0;
    puVar10 = DAT_047ef4b0 + 1;
    do {
      puVar7 = puVar10;
      if ((uVar6 & 1) != 0) {
        puVar7 = (ulong *)puVar3[1];
      }
      __s2 = (char *)(**(code **)(*(long *)puVar7[uVar9] + 0x18))();
      iVar4 = strcmp(param_1,__s2);
      if (iVar4 == 0) {
        if ((*puVar3 & 1) != 0) {
          puVar10 = (ulong *)puVar3[1];
        }
        plVar5 = (long *)puVar10[uVar9];
        if (plVar5 == (long *)0x0) {
          return 0;
        }
        if (param_2 != 0) {
          local_70 = &local_68;
          local_38 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          local_80 = 0;
          local_68 = 0;
                    /* try { // try from 0032e974 to 0032e983 has its CatchHandler @ 0032ea24 */
          (**(code **)(*plVar5 + 0x20))(&local_40,plVar5,&local_90,&local_38);
          *(bool *)param_2 = local_40 == (undefined8 *)0x0;
          if (local_40 != (undefined8 *)0x0) {
            plVar5 = local_40 + 1;
            do {
              lVar8 = *plVar5;
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(plVar5,0x10);
              if (bVar2) {
                *plVar5 = lVar8 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
            if (lVar8 + -1 == 0) {
              (**(code **)*local_40)(local_40);
              FUN_0049e790(PTR_LAB_047cba48,local_40);
            }
          }
          FUN_0032ef50(&uStack_58);
          FUN_0025cef0(&local_70,local_68);
          if ((uStack_88 & 1) != 0) {
            FUN_0049e790(PTR_LAB_047cba48,uStack_78);
          }
          if (4 < local_38) {
            FUN_00350fd0();
          }
        }
        return 1;
      }
      uVar6 = *puVar3;
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6 >> 1);
  }
  return 0;
}


