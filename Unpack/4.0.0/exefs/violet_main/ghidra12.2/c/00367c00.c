/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00367c00; name: FUN_00367c00
 */


void FUN_00367c00(undefined8 *param_1,long *param_2,ulong param_3,ulong param_4)

{
  char cVar1;
  bool bVar2;
  size_t __n;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long local_50;
  ulong uStack_48;
  long local_40;
  long lStack_38;
  size_t local_28;
  long lStack_20;
  undefined8 local_18;
  
  __n = param_4 - param_3;
  if (__n < 0x18) {
    *param_1 = 0;
    *(char *)(param_1 + 1) = (char)__n;
    if (*param_2 == 0) {
      lVar5 = (long)param_2 + 9;
    }
    else {
      lVar5 = param_2[2];
    }
    memcpy((void *)((long)param_1 + 9),(void *)(lVar5 + param_3),__n);
    return;
  }
  uStack_48 = param_2[1];
  local_50 = *param_2;
  lStack_38 = param_2[3];
  local_40 = param_2[2];
  if (param_4 < param_3) {
LAB_00367cf0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (local_50 == 0) {
    if ((uStack_48 & 0xff) < param_4) goto LAB_00367cf0;
    local_28 = CONCAT71(local_28._1_7_,(char)__n);
    memcpy((void *)((ulong)&local_28 | 1),(void *)(((ulong)&local_50 | 8) + param_3 + 1),__n);
    puVar3 = (undefined8 *)0x0;
  }
  else {
    if (uStack_48 < param_4) goto LAB_00367cf0;
    lStack_20 = local_40 + param_3;
    puVar3 = *(undefined8 **)(local_50 + 0x10);
    local_28 = __n;
  }
  *param_1 = puVar3;
  param_1[3] = local_18;
  param_1[2] = lStack_20;
  param_1[1] = local_28;
  plVar4 = (long *)*puVar3;
  if (plVar4 != (long *)0x0) {
    do {
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(plVar4,0x10);
      if (bVar2) {
        *plVar4 = *plVar4 + 1;
        cVar1 = ExclusiveMonitorsStatus();
      }
    } while (cVar1 != '\0');
  }
  return;
}


