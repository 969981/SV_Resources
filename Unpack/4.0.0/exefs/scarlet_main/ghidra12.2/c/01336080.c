/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01336080; name: FUN_01336080
 */


void FUN_01336080(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  
  plVar5 = (long *)*param_2;
  plVar4 = param_2;
  if (plVar5 == (long *)0x0) {
LAB_013360c0:
    plVar5 = (long *)plVar4[1];
    if (plVar5 != (long *)0x0) goto LAB_0133626c;
    bVar1 = true;
  }
  else {
    plVar4 = (long *)param_2[1];
    if (plVar4 != (long *)0x0) {
      plVar5 = (long *)*plVar4;
      if (plVar5 != (long *)0x0) {
        plVar6 = (long *)*plVar5;
        plVar4 = plVar5;
        if (plVar6 != (long *)0x0) {
          plVar5 = (long *)*plVar6;
          plVar4 = plVar6;
          if (plVar5 != (long *)0x0) {
            plVar4 = plVar5;
            for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
              plVar4 = plVar5;
            }
          }
        }
      }
      goto LAB_013360c0;
    }
    plVar4 = param_2;
LAB_0133626c:
    bVar1 = false;
    plVar5[2] = plVar4[2];
  }
  puVar3 = (undefined8 *)plVar4[2];
  if ((long *)*puVar3 == plVar4) {
    *puVar3 = plVar5;
    if (plVar4 == param_1) {
      plVar6 = (long *)0x0;
      param_1 = plVar5;
      goto LAB_013360f4;
    }
    puVar3 = (undefined8 *)(plVar4[2] + 8);
  }
  else {
    puVar3[1] = plVar5;
    puVar3 = (undefined8 *)plVar4[2];
  }
  plVar6 = (long *)*puVar3;
LAB_013360f4:
  lVar7 = plVar4[3];
  plVar2 = param_1;
  if (plVar4 != param_2) {
    lVar8 = param_2[2];
    plVar4[2] = lVar8;
    *(long **)(lVar8 + (ulong)(*(long **)param_2[2] != param_2) * 8) = plVar4;
    lVar8 = *param_2;
    *plVar4 = lVar8;
    *(long **)(lVar8 + 0x10) = plVar4;
    lVar8 = param_2[1];
    plVar4[1] = lVar8;
    if (lVar8 != 0) {
      *(long **)(lVar8 + 0x10) = plVar4;
    }
    plVar2 = plVar4;
    if (param_1 != param_2) {
      plVar2 = param_1;
    }
    *(char *)(plVar4 + 3) = (char)param_2[3];
  }
  if (((char)lVar7 != '\0') && (plVar2 != (long *)0x0)) {
    if (bVar1) {
      do {
        puVar3 = (undefined8 *)plVar6[2];
        plVar4 = plVar2;
        if ((long *)*puVar3 == plVar6) {
          if ((char)plVar6[3] == '\0') {
            *(undefined1 *)(plVar6 + 3) = 1;
            *(undefined1 *)(puVar3 + 3) = 0;
            plVar4 = (long *)plVar6[2];
            lVar7 = *plVar4;
            lVar8 = *(long *)(lVar7 + 8);
            *plVar4 = lVar8;
            if (lVar8 != 0) {
              *(long **)(lVar8 + 0x10) = plVar4;
            }
            *(long *)(lVar7 + 0x10) = plVar4[2];
            ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = lVar7;
            *(long **)(lVar7 + 8) = plVar4;
            plVar4[2] = lVar7;
            plVar4 = plVar6;
            if (plVar2 != (long *)plVar6[1]) {
              plVar4 = plVar2;
            }
            plVar6 = *(long **)plVar6[1];
          }
          lVar7 = *plVar6;
          if ((lVar7 == 0) || (*(char *)(lVar7 + 0x18) != '\0')) {
            lVar8 = plVar6[1];
            if ((lVar8 == 0) || (*(char *)(lVar8 + 0x18) != '\0')) {
              *(undefined1 *)(plVar6 + 3) = 0;
              plVar5 = (long *)plVar6[2];
              if (plVar5 != plVar4) goto LAB_013361a0;
              goto LAB_0133644c;
            }
            if ((lVar7 == 0) || (*(char *)(lVar7 + 0x18) != '\0')) {
              *(undefined1 *)(lVar8 + 0x18) = 1;
              plVar4 = (long *)plVar6[1];
              *(undefined1 *)(plVar6 + 3) = 0;
              lVar7 = *plVar4;
              plVar6[1] = lVar7;
              if (lVar7 != 0) {
                *(long **)(lVar7 + 0x10) = plVar6;
              }
              plVar4[2] = plVar6[2];
              ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = plVar4;
              *plVar4 = (long)plVar6;
              plVar6[2] = (long)plVar4;
              plVar6 = plVar4;
            }
          }
          *(undefined1 *)(plVar6 + 3) = *(undefined1 *)(plVar6[2] + 0x18);
          *(undefined1 *)(plVar6[2] + 0x18) = 1;
          *(undefined1 *)(*plVar6 + 0x18) = 1;
          plVar4 = (long *)plVar6[2];
          plVar5 = (long *)*plVar4;
          lVar7 = plVar5[1];
          *plVar4 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar4;
          }
          plVar5[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar5;
          plVar5[1] = (long)plVar4;
          goto LAB_01336384;
        }
        if ((char)plVar6[3] == '\0') {
          *(undefined1 *)(plVar6 + 3) = 1;
          *(undefined1 *)(puVar3 + 3) = 0;
          lVar7 = plVar6[2];
          plVar4 = *(long **)(lVar7 + 8);
          lVar8 = *plVar4;
          *(long *)(lVar7 + 8) = lVar8;
          if (lVar8 != 0) {
            *(long *)(lVar8 + 0x10) = lVar7;
          }
          plVar4[2] = *(long *)(lVar7 + 0x10);
          (*(long **)(lVar7 + 0x10))[**(long **)(lVar7 + 0x10) != lVar7] = (long)plVar4;
          *plVar4 = lVar7;
          *(long **)(lVar7 + 0x10) = plVar4;
          plVar4 = plVar6;
          if (plVar2 != (long *)*plVar6) {
            plVar4 = plVar2;
          }
          plVar6 = (long *)((long *)*plVar6)[1];
        }
        lVar7 = *plVar6;
        if ((lVar7 != 0) && (*(char *)(lVar7 + 0x18) == '\0')) {
          if ((plVar6[1] != 0) && (*(char *)(plVar6[1] + 0x18) == '\0')) goto LAB_0133632c;
          *(undefined1 *)(lVar7 + 0x18) = 1;
          plVar4 = (long *)*plVar6;
          *(undefined1 *)(plVar6 + 3) = 0;
          lVar7 = plVar4[1];
          *plVar6 = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar6;
          }
          plVar4[2] = plVar6[2];
          ((undefined8 *)plVar6[2])[*(long **)plVar6[2] != plVar6] = plVar4;
          plVar4[1] = (long)plVar6;
          plVar6[2] = (long)plVar4;
LAB_01336330:
          *(undefined1 *)(plVar4 + 3) = *(undefined1 *)(plVar4[2] + 0x18);
          *(undefined1 *)(plVar4[2] + 0x18) = 1;
          *(undefined1 *)(plVar4[1] + 0x18) = 1;
          plVar4 = (long *)plVar4[2];
          plVar5 = (long *)plVar4[1];
          lVar7 = *plVar5;
          plVar4[1] = lVar7;
          if (lVar7 != 0) {
            *(long **)(lVar7 + 0x10) = plVar4;
          }
          plVar5[2] = plVar4[2];
          ((undefined8 *)plVar4[2])[*(long **)plVar4[2] != plVar4] = plVar5;
          *plVar5 = (long)plVar4;
LAB_01336384:
          plVar4[2] = (long)plVar5;
          return;
        }
        if ((plVar6[1] != 0) && (*(char *)(plVar6[1] + 0x18) == '\0')) {
LAB_0133632c:
          plVar4 = plVar6;
          goto LAB_01336330;
        }
        *(undefined1 *)(plVar6 + 3) = 0;
        plVar5 = (long *)plVar6[2];
        if (plVar5 == plVar4) {
          plVar5 = plVar4;
LAB_0133644c:
          *(undefined1 *)(plVar5 + 3) = 1;
          return;
        }
LAB_013361a0:
        if ((char)plVar5[3] == '\0') goto LAB_0133644c;
        plVar6 = (long *)((undefined8 *)plVar5[2])[*(long **)plVar5[2] == plVar5];
        plVar2 = plVar4;
      } while( true );
    }
    *(undefined1 *)(plVar5 + 3) = 1;
  }
  return;
}


