/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fc5644; name: FUN_00fc5644
 */


void FUN_00fc5644(long param_1,long *param_2)

{
  uint *puVar1;
  int *piVar2;
  ulong uVar3;
  ushort *puVar4;
  int *piVar5;
  ulong uVar6;
  long lVar7;
  long local_78;
  long local_70;
  int *local_68;
  long local_60;
  long local_58;
  int *local_50;
  long local_48;
  long local_40;
  int *local_38;
  char *local_18;
  
  piVar2 = (int *)param_2[1];
  if (piVar2 == (int *)0x0) {
LAB_00fc5a9c:
    local_40 = 0;
    local_38 = (int *)0x0;
    local_48 = 0;
  }
  else {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    }
    local_18 = "FirstPhase";
    puVar1 = bsearch(&local_18,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 == (uint *)0x0) goto LAB_00fc5a9c;
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
    puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (*puVar4 < 7) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)0x0;
      if ((ulong)puVar4[3] != 0) {
        puVar1 = (uint *)((long)piVar2 + (ulong)puVar4[3]);
        piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    if (((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
        (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar3 == 0)) ||
       (1 < (int)*(char *)((long)piVar5 + uVar3) - 0xfU)) goto LAB_00fc5a9c;
    if ((*puVar4 < 0xb) || ((ulong)puVar4[5] == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar4[5]);
    }
    local_38 = (int *)param_2[2];
    if (*(ushort *)((long)local_38 - (long)*local_38) < 5) {
      lVar7 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)local_38 - (long)*local_38))[2];
      lVar7 = 0;
      if (uVar6 != 0) {
        puVar1 = (uint *)((long)local_38 + uVar6);
        lVar7 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                    (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
    local_48 = *param_2 + uVar3;
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar3 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)*(uint *)((long)piVar2 + uVar3);
    }
    puVar1 = (uint *)(lVar7 + uVar3 * 4 + 4);
    local_40 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00fc5af8(param_1,&local_48);
  piVar2 = (int *)param_2[1];
  if (piVar2 == (int *)0x0) {
LAB_00fc5ac0:
    local_58 = 0;
    local_50 = (int *)0x0;
    local_60 = 0;
  }
  else {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    }
    local_18 = "SecondPhase";
    puVar1 = bsearch(&local_18,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 == (uint *)0x0) goto LAB_00fc5ac0;
    piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
    puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
    if (*puVar4 < 7) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)0x0;
      if ((ulong)puVar4[3] != 0) {
        puVar1 = (uint *)((long)piVar2 + (ulong)puVar4[3]);
        piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
      }
    }
    if (((*(ushort *)((long)piVar5 - (long)*piVar5) < 5) ||
        (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar3 == 0)) ||
       (1 < (int)*(char *)((long)piVar5 + uVar3) - 0xfU)) goto LAB_00fc5ac0;
    if ((*puVar4 < 0xb) || ((ulong)puVar4[5] == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar4[5]);
    }
    local_50 = (int *)param_2[2];
    if (*(ushort *)((long)local_50 - (long)*local_50) < 5) {
      lVar7 = 0;
    }
    else {
      uVar6 = (ulong)((ushort *)((long)local_50 - (long)*local_50))[2];
      lVar7 = 0;
      if (uVar6 != 0) {
        puVar1 = (uint *)((long)local_50 + uVar6);
        lVar7 = (long)puVar1 + (ulong)*puVar1;
      }
    }
    piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                    (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
    local_60 = *param_2 + uVar3;
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar3 == 0)) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (ulong)*(uint *)((long)piVar2 + uVar3);
    }
    puVar1 = (uint *)(lVar7 + uVar3 * 4 + 4);
    local_58 = (long)puVar1 + (ulong)*puVar1;
  }
  FUN_00fc5af8(param_1 + 8,&local_60);
  piVar2 = (int *)param_2[1];
  if (piVar2 != (int *)0x0) {
    if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 7) ||
       (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3], uVar3 == 0)) {
      puVar1 = (uint *)0x0;
    }
    else {
      puVar1 = (uint *)((long)piVar2 + uVar3);
      puVar1 = (uint *)((long)puVar1 + (ulong)*puVar1);
    }
    local_18 = "ThirdPhase";
    puVar1 = bsearch(&local_18,puVar1 + 1,(ulong)*puVar1,4,(__compar_fn_t)PTR_LAB_047d5600);
    if (puVar1 != (uint *)0x0) {
      piVar2 = (int *)((long)puVar1 + (ulong)*puVar1);
      puVar4 = (ushort *)((long)piVar2 - (long)*piVar2);
      if (*puVar4 < 7) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)0x0;
        if ((ulong)puVar4[3] != 0) {
          puVar1 = (uint *)((long)piVar2 + (ulong)puVar4[3]);
          piVar5 = (int *)((long)puVar1 + (ulong)*puVar1);
        }
      }
      if (((4 < *(ushort *)((long)piVar5 - (long)*piVar5)) &&
          (uVar3 = (ulong)((ushort *)((long)piVar5 - (long)*piVar5))[2], uVar3 != 0)) &&
         ((int)*(char *)((long)piVar5 + uVar3) - 0xfU < 2)) {
        if ((*puVar4 < 0xb) || ((ulong)puVar4[5] == 0)) {
          uVar3 = 0;
        }
        else {
          uVar3 = (ulong)*(ushort *)((long)piVar2 + (ulong)puVar4[5]);
        }
        local_68 = (int *)param_2[2];
        if (*(ushort *)((long)local_68 - (long)*local_68) < 5) {
          lVar7 = 0;
        }
        else {
          uVar6 = (ulong)((ushort *)((long)local_68 - (long)*local_68))[2];
          lVar7 = 0;
          if (uVar6 != 0) {
            puVar1 = (uint *)((long)local_68 + uVar6);
            lVar7 = (long)puVar1 + (ulong)*puVar1;
          }
        }
        piVar2 = (int *)((long)((long)piVar2 + (ulong)puVar4[3]) +
                        (ulong)*(uint *)((long)piVar2 + (ulong)puVar4[3]));
        local_78 = *param_2 + uVar3;
        if ((*(ushort *)((long)piVar2 - (long)*piVar2) < 9) ||
           (uVar3 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[4], uVar3 == 0)) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (ulong)*(uint *)((long)piVar2 + uVar3);
        }
        puVar1 = (uint *)(lVar7 + uVar3 * 4 + 4);
        local_70 = (long)puVar1 + (ulong)*puVar1;
        goto LAB_00fc5a3c;
      }
    }
  }
  local_70 = 0;
  local_68 = (int *)0x0;
  local_78 = 0;
LAB_00fc5a3c:
  FUN_00fc5af8(param_1 + 0x10,&local_78);
  return;
}


