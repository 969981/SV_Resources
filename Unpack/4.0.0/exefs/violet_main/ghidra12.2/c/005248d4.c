/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005248d4; name: FUN_005248d4
 */


void FUN_005248d4(long *param_1,long *param_2)

{
  undefined2 uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  
  if (*param_1 == *param_2) {
    lVar3 = param_1[1];
    *(short *)(param_1 + 1) = (short)param_2[1];
    *(short *)(param_2 + 1) = (short)lVar3;
    uVar1 = *(undefined2 *)((long)param_1 + 10);
    *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
    *(undefined2 *)((long)param_2 + 10) = uVar1;
    lVar3 = param_1[2];
    param_1[2] = param_2[2];
    param_2[2] = lVar3;
  }
  else {
    local_48 = 0;
    local_40 = 0;
    local_38 = 0;
                    /* try { // try from 00524908 to 00524913 has its CatchHandler @ 00524abc */
    FUN_005239b8(&local_48,param_2);
    if (*(ushort *)(param_2 + 1) < 0x101) {
      if ((ulong)*(ushort *)((long)param_2 + 10) != 0) {
        lVar6 = (ulong)*(ushort *)((long)param_2 + 10) << 5;
        lVar3 = param_2[2] + 8;
        do {
                    /* try { // try from 00524934 to 0052493b has its CatchHandler @ 00524ac4 */
          FUN_005217b4(lVar3);
          lVar6 = lVar6 + -0x20;
          lVar3 = lVar3 + 0x20;
        } while (lVar6 != 0);
      }
    }
    else {
      puVar4 = (undefined8 *)param_2[2];
      plVar5 = (long *)*puVar4;
      while (plVar5 != puVar4 + 1) {
                    /* try { // try from 00524a00 to 00524a03 has its CatchHandler @ 00524ab8 */
        FUN_005217b4(plVar5 + 5);
        plVar2 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar2 = plVar5 + 2;
          if (*(long **)*plVar2 == plVar5) {
            plVar5 = (long *)*plVar2;
          }
          else {
            do {
              lVar3 = *plVar2;
              plVar2 = (long *)(lVar3 + 0x10);
              plVar5 = (long *)*plVar2;
            } while (*plVar5 != lVar3);
          }
        }
        else {
          do {
            plVar5 = plVar2;
            plVar2 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
      }
    }
                    /* try { // try from 00524948 to 00524953 has its CatchHandler @ 00524abc */
    FUN_005239b8(param_2,param_1);
    if (*(ushort *)(param_1 + 1) < 0x101) {
      if ((ulong)*(ushort *)((long)param_1 + 10) != 0) {
        lVar6 = (ulong)*(ushort *)((long)param_1 + 10) << 5;
        lVar3 = param_1[2] + 8;
        do {
                    /* try { // try from 00524974 to 0052497b has its CatchHandler @ 00524ac0 */
          FUN_005217b4(lVar3);
          lVar6 = lVar6 + -0x20;
          lVar3 = lVar3 + 0x20;
        } while (lVar6 != 0);
      }
    }
    else {
      puVar4 = (undefined8 *)param_1[2];
      plVar5 = (long *)*puVar4;
      while (plVar5 != puVar4 + 1) {
                    /* try { // try from 00524a68 to 00524a6b has its CatchHandler @ 00524ab4 */
        FUN_005217b4(plVar5 + 5);
        plVar2 = (long *)plVar5[1];
        if ((long *)plVar5[1] == (long *)0x0) {
          plVar2 = plVar5 + 2;
          if (*(long **)*plVar2 == plVar5) {
            plVar5 = (long *)*plVar2;
          }
          else {
            do {
              lVar3 = *plVar2;
              plVar2 = (long *)(lVar3 + 0x10);
              plVar5 = (long *)*plVar2;
            } while (*plVar5 != lVar3);
          }
        }
        else {
          do {
            plVar5 = plVar2;
            plVar2 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
      }
    }
                    /* try { // try from 00524988 to 00524993 has its CatchHandler @ 00524abc */
    FUN_005239b8(param_1,&local_48);
    FUN_005212b0(&local_48);
  }
  return;
}


