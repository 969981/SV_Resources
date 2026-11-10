/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03209ed8; name: FUN_03209ed8
 */


long * FUN_03209ed8(long *param_1,long *param_2)

{
  char cVar1;
  bool bVar2;
  ulong uVar3;
  long *plVar4;
  long *plVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  int iVar8;
  ulong *puVar9;
  uint uVar10;
  long *local_38 [2];
  ulong local_28;
  
  puVar6 = (ulong *)*param_1;
  puVar9 = puVar6;
  while( true ) {
    uVar10 = (uint)*puVar9;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
    goto LAB_03209f3c;
  }
  if ((puVar9 != (ulong *)0x0) &&
     (uVar10 = uVar10 & 0xfffff,
     0x10 < (ushort)puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                        POPCOUNT((char)(uVar10 >> 0x10))) + 2])) goto LAB_03209fec;
LAB_03209f3c:
  puVar9 = puVar6;
  while( true ) {
    uVar10 = (uint)*puVar9;
    if ((uVar10 >> 0x14 & 1) != 0) break;
    if (((*puVar9 & 1) != 0) || (puVar9 = (ulong *)puVar9[1], puVar9 == (ulong *)0x0))
    goto LAB_03209f8c;
  }
  if ((puVar9 != (ulong *)0x0) &&
     (uVar10 = uVar10 & 0xfffff,
     0x10 < (puVar9[(ulong)(byte)(POPCOUNT((char)uVar10) + POPCOUNT((char)(uVar10 >> 8)) +
                                 POPCOUNT((char)(uVar10 >> 0x10))) + 2] >> 0x10 & 0xfff)))
  goto LAB_03209fec;
LAB_03209f8c:
  do {
    uVar10 = (uint)*puVar6;
    if ((uVar10 >> 0x13 & 1) != 0) {
      uVar3 = CONCAT44(uVar10,uVar10) & 0x7ffff0007ffff;
      if (((long *)puVar6[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                                       POPCOUNT((char)(uVar3 >> 0x10))) + 2] != (long *)0x0) &&
         (uVar3 = (**(code **)(*(long *)puVar6[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                             POPCOUNT((char)(uVar3 >> 8)) +
                                                            POPCOUNT((char)(uVar3 >> 0x10))) + 2] +
                              0x28))(), (uVar3 & 1) != 0)) {
        param_1[2] = 0;
        *(undefined1 *)(param_1 + 1) = 1;
        param_1[3] = 0;
        return param_1 + 2;
      }
      break;
    }
    puVar6 = (ulong *)puVar6[1];
  } while (puVar6 != (ulong *)0x0);
LAB_03209fec:
  if (*param_2 == 0) {
    puVar7 = (undefined8 *)*param_1;
LAB_0320a018:
    uVar10 = (uint)*puVar7;
    if ((uVar10 >> 0x13 & 1) == 0) goto code_r0x0320a020;
    uVar3 = CONCAT44(uVar10,uVar10) & 0x7ffff0007ffff;
    if ((long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                                    POPCOUNT((char)(uVar3 >> 0x10))) + 2] != (long *)0x0) {
      (**(code **)(*(long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar3) +
                                                 POPCOUNT((char)(uVar3 >> 8)) +
                                                POPCOUNT((char)(uVar3 >> 0x10))) + 2] + 0x10))
                (local_38);
      if ((local_28 & 1) != 0) {
        plVar5 = (long *)(local_28 & 0xfffffffffffffffe);
        plVar4 = plVar5 + 1;
        do {
          iVar8 = (int)*plVar4;
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
          if (bVar2) {
            *(int *)plVar4 = iVar8 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_0320a0e4;
      }
      goto LAB_0320a10c;
    }
    goto LAB_0320a100;
  }
  puVar7 = (undefined8 *)param_2[1];
  do {
    uVar10 = (uint)*puVar7;
    if ((uVar10 >> 0x13 & 1) != 0) {
      uVar3 = CONCAT44(uVar10,uVar10) & 0x7ffff0007ffff;
      plVar4 = (long *)puVar7[(ulong)(byte)(POPCOUNT((char)uVar3) + POPCOUNT((char)(uVar3 >> 8)) +
                                           POPCOUNT((char)(uVar3 >> 0x10))) + 2];
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x18))(local_38,plVar4,param_2);
        if ((local_28 & 1) != 0) {
          plVar5 = (long *)(local_28 & 0xfffffffffffffffe);
          plVar4 = plVar5 + 1;
          do {
            iVar8 = (int)*plVar4;
            cVar1 = '\x01';
            bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
            if (bVar2) {
              *(int *)plVar4 = iVar8 + -1;
              cVar1 = ExclusiveMonitorsStatus();
            }
          } while (cVar1 != '\0');
LAB_0320a0e4:
          if ((plVar5 != (long *)0x0) && (iVar8 == 1)) {
            (**(code **)(*plVar5 + 8))();
          }
        }
        goto LAB_0320a10c;
      }
      break;
    }
    puVar7 = (undefined8 *)puVar7[1];
  } while (puVar7 != (undefined8 *)0x0);
LAB_0320a100:
  local_38[0] = (long *)0x0;
LAB_0320a10c:
  if (local_38[0] != (long *)0x0) {
    param_1[2] = (long)local_38[0];
    param_1[3] = 1;
    *(undefined1 *)(param_1 + 1) = 2;
  }
  return local_38[0];
code_r0x0320a020:
  puVar7 = (undefined8 *)puVar7[1];
  if (puVar7 == (undefined8 *)0x0) goto LAB_0320a100;
  goto LAB_0320a018;
}


