/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0032e6f0; name: FUN_0032e6f0
 */


void FUN_0032e6f0(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  bool bVar2;
  ulong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  char *__s2;
  long *plVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong *puVar11;
  undefined8 local_60;
  long *plStack_58;
  undefined8 *local_50;
  undefined8 uStack_48;
  
  puVar3 = DAT_047ef4b0;
  if (DAT_047ef4b0 == (ulong *)0x0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar7 = *DAT_047ef4b0;
  if (1 < uVar7) {
    uVar10 = 0;
    puVar11 = DAT_047ef4b0 + 1;
    do {
      puVar8 = puVar11;
      if ((uVar7 & 1) != 0) {
        puVar8 = (ulong *)puVar3[1];
      }
      __s2 = (char *)(**(code **)(*(long *)puVar8[uVar10] + 0x18))();
      iVar5 = strcmp(param_2,__s2);
      if (iVar5 == 0) {
        if ((*puVar3 & 1) != 0) {
          puVar11 = (ulong *)puVar3[1];
        }
        plVar6 = (long *)puVar11[uVar10];
        if (plVar6 != (long *)0x0) {
          plStack_58 = (long *)param_3[1];
          local_60 = *param_3;
          uStack_48 = param_3[3];
          local_50 = (undefined8 *)param_3[2];
          *param_3 = 0;
          param_3[1] = 0;
          param_3[2] = 0;
                    /* try { // try from 0032e79c to 0032e7a7 has its CatchHandler @ 0032e830 */
          (**(code **)(*plVar6 + 0x10))(param_1,plVar6,&local_60);
          puVar4 = local_50;
          local_50 = (undefined8 *)0x0;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            FUN_0049e790(PTR_LAB_047cba48,puVar4);
          }
          if (plStack_58 == (long *)0x0) {
            return;
          }
          plVar6 = plStack_58 + 1;
          do {
            lVar9 = *plVar6;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar6,0x10);
            if (bVar2) {
              *plVar6 = lVar9 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
          if (lVar9 == 0) {
            (**(code **)(*plStack_58 + 0x10))(plStack_58);
            std::__shared_weak_count::__release_weak();
            return;
          }
          return;
        }
        break;
      }
      uVar7 = *puVar3;
      uVar10 = uVar10 + 1;
    } while (uVar10 < uVar7 >> 1);
  }
  *param_1 = 0;
  return;
}


