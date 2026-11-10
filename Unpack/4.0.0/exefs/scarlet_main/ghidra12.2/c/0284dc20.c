/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0284dc20; name: FUN_0284dc20
 */


void FUN_0284dc20(long *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  short *psVar1;
  int *piVar2;
  short sVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  puVar6 = PTR_DAT_047d3918;
  lVar10 = *param_2;
  if (lVar10 != *param_3) {
    do {
      local_88 = (undefined8 *)0x0;
      uStack_80 = 0;
      FUN_00c43ef0(&local_88,lVar10);
      local_78 = *(undefined8 *)(lVar10 + 0x10);
      local_70 = *(undefined1 *)(lVar10 + 0x18);
      uVar9 = FUN_0284f214(param_4,&local_88);
      puVar7 = local_88;
      if (local_88 != (undefined8 *)0x0) {
        psVar1 = (short *)(local_88 + 3);
        do {
          sVar3 = *psVar1;
          cVar4 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(psVar1,0x10);
          if (bVar5) {
            *psVar1 = sVar3 + -1;
            cVar4 = ExclusiveMonitorsStatus();
          }
        } while (cVar4 != '\0');
        if (sVar3 == 1) {
          piVar2 = (int *)((long)local_88 + 0x1c);
          do {
            iVar8 = *piVar2;
            cVar4 = '\x01';
            bVar5 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar5) {
              *piVar2 = -1;
              cVar4 = ExclusiveMonitorsStatus();
            }
          } while (cVar4 != '\0');
          if (iVar8 != -1) {
            if (((*PTR_DAT_047d3908 & 1) == 0) &&
               (iVar8 = __cxa_guard_acquire(PTR_DAT_047d3908), iVar8 != 0)) {
              FUN_00100190(PTR_LAB_047d3de8,PTR_DAT_047d3910,&PTR_LOOP_04483000);
              __cxa_guard_release(PTR_DAT_047d3908);
            }
            lVar10 = *(long *)PTR_DAT_047d3910;
            *(long *)puVar6 = lVar10;
            local_68 = *puVar7;
            FUN_00c44438(lVar10 + 0x8040,&local_68);
          }
        }
        else if (sVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          nn::diag::detail::AbortImpl("","","",0);
        }
      }
      if ((uVar9 & 1) != 0) {
        lVar10 = *param_2;
        break;
      }
      lVar10 = *param_2 + 0x20;
      *param_2 = lVar10;
    } while (lVar10 != *param_3);
  }
  *param_1 = lVar10;
  return;
}


