/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0033c32c; name: FUN_0033c32c
 */


void FUN_0033c32c(long param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long local_50 [4];
  uint local_24;
  
  *(uint *)(param_1 + 0x94) = param_2;
  if (*(long *)(param_1 + 0x168) != 0) {
    FUN_003405b0(*(long *)(param_1 + 0x168),param_2);
    if (4 < param_2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar2 = *(long *)(param_1 + 0x168);
    FUN_003673f0(local_50,(&PTR_s_Subchannel_state_change_to_IDLE_04495c48)[(int)param_2]);
    FUN_00344ea0(lVar2 + 0xd0,1,local_50);
  }
  plVar3 = *(long **)(param_1 + 0x98);
  local_50[0] = param_1;
  local_24 = param_2;
  while (plVar3 != (long *)(param_1 + 0xa0)) {
    FUN_0033d2f8(plVar3 + 5,local_50,&local_24);
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      plVar1 = plVar3 + 2;
      if (*(long **)*plVar1 == plVar3) {
        plVar3 = (long *)*plVar1;
      }
      else {
        do {
          lVar2 = *plVar1;
          plVar1 = (long *)(lVar2 + 0x10);
          plVar3 = (long *)*plVar1;
        } while (*plVar3 != lVar2);
      }
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  plVar3 = *(long **)(param_1 + 0xb0);
  while (plVar3 != (long *)(param_1 + 0xb8)) {
    FUN_0033a990(plVar3[5],param_2);
    plVar1 = (long *)plVar3[1];
    if ((long *)plVar3[1] == (long *)0x0) {
      plVar1 = plVar3 + 2;
      if (*(long **)*plVar1 == plVar3) {
        plVar3 = (long *)*plVar1;
      }
      else {
        do {
          lVar2 = *plVar1;
          plVar1 = (long *)(lVar2 + 0x10);
          plVar3 = (long *)*plVar1;
        } while (*plVar3 != lVar2);
      }
    }
    else {
      do {
        plVar3 = plVar1;
        plVar1 = (long *)*plVar3;
      } while ((long *)*plVar3 != (long *)0x0);
    }
  }
  return;
}


