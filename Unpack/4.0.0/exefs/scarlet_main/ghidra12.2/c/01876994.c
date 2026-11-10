/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01876994; name: FUN_01876994
 */


void FUN_01876994(long param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_60;
  ulong uStack_58;
  undefined8 local_50;
  ulong uStack_48;
  short local_40;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  char local_3a;
  long local_38;
  undefined2 local_30;
  
  lVar2 = *(long *)(param_1 + 0x40);
  lVar1 = *(long *)(param_1 + 0x48);
  local_40 = *(short *)(param_2 + 3);
  local_3a = *(char *)((long)param_2 + 0x1f);
  local_38 = param_2[4];
  if (lVar2 != lVar1) {
    do {
      if (((*(short *)(lVar2 + 0x20) == local_40) && (*(char *)(lVar2 + 0x26) == local_3a)) &&
         (*(long *)(lVar2 + 0x28) == local_38)) goto LAB_018769f4;
      lVar2 = lVar2 + 0x40;
    } while (lVar1 != lVar2);
    lVar2 = lVar1;
  }
LAB_018769f4:
  if (lVar1 == lVar2) {
    uStack_58 = (ulong)*(uint *)(param_2 + 1);
    local_60 = *param_2;
    uStack_48 = (ulong)*(uint *)((long)param_2 + 0x14);
    local_50 = *(undefined8 *)((long)param_2 + 0xc);
    local_3d = *(short *)((long)param_2 + 0x1a) != 0;
    local_3e = *(undefined1 *)((long)param_2 + 0x1c);
    local_3c = *(undefined1 *)((long)param_2 + 0x1d);
    local_3b = *(undefined1 *)((long)param_2 + 0x1e);
    local_30 = 0;
    FUN_01876aa4(param_1 + 0x40,&local_60);
    if (*(code **)(param_1 + 0x80) != (code *)0x0) {
      (**(code **)(param_1 + 0x80))(param_1 + 0xa0,&local_60);
    }
  }
  return;
}


