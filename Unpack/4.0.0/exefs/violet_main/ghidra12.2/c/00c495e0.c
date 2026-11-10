/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00c495e0; name: FUN_00c495e0
 */


void FUN_00c495e0(long *param_1,long param_2)

{
  long *plVar1;
  long *plVar2;
  size_t sVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long local_48;
  
  plVar5 = (long *)param_1[1];
  plVar4 = (long *)param_1[2];
  if ((plVar5 != plVar4) && (*plVar5 != param_2)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) {
        plVar5 = plVar4;
        goto LAB_00c49644;
      }
    } while (*plVar5 != param_2);
  }
LAB_00c49644:
  if (plVar4 == plVar5) {
    local_48 = param_2;
    FUN_00e22354(param_1 + 1,&local_48);
    FUN_00e231c0(param_1[1],param_1[2]);
  }
  local_48 = *param_1;
  plVar5 = *(long **)(param_2 + 0x80);
  plVar4 = *(long **)(param_2 + 0x88);
  if ((plVar5 != plVar4) && (*plVar5 != local_48)) {
    do {
      plVar5 = plVar5 + 1;
      if (plVar4 == plVar5) {
        plVar5 = plVar4;
        goto LAB_00c496a8;
      }
    } while (*plVar5 != local_48);
  }
LAB_00c496a8:
  if (plVar4 == plVar5) {
    FUN_00e22354((long *)(param_2 + 0x80),&local_48);
    FUN_00e22b60(*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x88));
  }
  plVar5 = (long *)param_1[8];
  plVar4 = (long *)param_1[9];
  do {
    if (plVar5 == plVar4) {
      return;
    }
    plVar6 = *(long **)(param_2 + 0x80);
    plVar2 = *(long **)(param_2 + 0x88);
    lVar7 = *plVar5;
    if ((plVar6 != plVar2) && (*plVar6 != lVar7)) {
      do {
        if (plVar2 + -1 == plVar6) {
          plVar6 = plVar2;
          goto LAB_00c49714;
        }
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != lVar7);
    }
LAB_00c49714:
    if (plVar2 != plVar6) {
      sVar3 = (long)plVar2 - (long)(plVar6 + 1);
      if (sVar3 != 0) {
        memmove(plVar6,plVar6 + 1,sVar3);
      }
      *(size_t *)(param_2 + 0x88) = (long)plVar6 + sVar3;
    }
    plVar6 = *(long **)(lVar7 + 0x48);
    plVar2 = *(long **)(lVar7 + 0x50);
    if ((plVar6 != plVar2) && (*plVar6 != param_2)) {
      do {
        if (plVar2 + -1 == plVar6) {
          plVar6 = plVar2;
          goto LAB_00c49760;
        }
        plVar1 = plVar6 + 1;
        plVar6 = plVar6 + 1;
      } while (*plVar1 != param_2);
    }
LAB_00c49760:
    if (plVar2 != plVar6) {
      sVar3 = (long)plVar2 - (long)(plVar6 + 1);
      if (sVar3 != 0) {
        memmove(plVar6,plVar6 + 1,sVar3);
      }
      *(size_t *)(lVar7 + 0x50) = (long)plVar6 + sVar3;
    }
    plVar5 = plVar5 + 1;
  } while( true );
}


