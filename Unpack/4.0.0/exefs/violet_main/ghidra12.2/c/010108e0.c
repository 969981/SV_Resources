/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 010108e0; name: FUN_010108e0
 */


void FUN_010108e0(long *param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  bVar1 = param_2 == param_1;
  *(bool *)(param_2 + 3) = bVar1;
  do {
    if ((bVar1) || (plVar3 = (long *)param_2[2], (char)plVar3[3] != '\0')) {
      return;
    }
    plVar2 = (long *)plVar3[2];
    plVar5 = (long *)*plVar2;
    if (plVar5 == plVar3) {
      if ((plVar2[1] == 0) || (plVar5 = (long *)(plVar2[1] + 0x18), *(char *)plVar5 != '\0')) {
        if ((long *)*plVar3 != param_2) {
          plVar5 = (long *)plVar3[1];
          lVar4 = *plVar5;
          plVar3[1] = lVar4;
          if (lVar4 != 0) {
            *(long **)(lVar4 + 0x10) = plVar3;
            plVar2 = (long *)plVar3[2];
          }
          plVar5[2] = (long)plVar2;
          ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = plVar5;
          *plVar5 = (long)plVar3;
          plVar3[2] = (long)plVar5;
          plVar2 = (long *)plVar5[2];
          plVar3 = plVar5;
        }
        *(undefined1 *)(plVar3 + 3) = 1;
        plVar3 = (long *)*plVar2;
        *(undefined1 *)(plVar2 + 3) = 0;
        lVar4 = plVar3[1];
        *plVar2 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar2;
        }
        plVar3[2] = plVar2[2];
        ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
        plVar3[1] = (long)plVar2;
        goto LAB_0101098c;
      }
    }
    else if ((plVar5 == (long *)0x0) || (plVar5 = plVar5 + 3, (char)*plVar5 != '\0')) {
      if ((long *)*plVar3 == param_2) {
        lVar4 = param_2[1];
        *plVar3 = lVar4;
        if (lVar4 != 0) {
          *(long **)(lVar4 + 0x10) = plVar3;
          plVar2 = (long *)plVar3[2];
        }
        param_2[2] = (long)plVar2;
        ((undefined8 *)plVar3[2])[*(long **)plVar3[2] != plVar3] = param_2;
        param_2[1] = (long)plVar3;
        plVar3[2] = (long)param_2;
        plVar2 = (long *)param_2[2];
      }
      else {
        param_2 = plVar3;
      }
      *(undefined1 *)(param_2 + 3) = 1;
      plVar3 = (long *)plVar2[1];
      *(undefined1 *)(plVar2 + 3) = 0;
      lVar4 = *plVar3;
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 0x10) = plVar2;
      }
      plVar3[2] = plVar2[2];
      ((undefined8 *)plVar2[2])[*(long **)plVar2[2] != plVar2] = plVar3;
      *plVar3 = (long)plVar2;
LAB_0101098c:
      plVar2[2] = (long)plVar3;
      return;
    }
    bVar1 = plVar2 == param_1;
    *(undefined1 *)(plVar3 + 3) = 1;
    *(bool *)(plVar2 + 3) = bVar1;
    *(char *)plVar5 = '\x01';
    param_2 = plVar2;
  } while( true );
}


