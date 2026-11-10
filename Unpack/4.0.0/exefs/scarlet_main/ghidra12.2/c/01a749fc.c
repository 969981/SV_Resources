/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01a749fc; name: FUN_01a749fc
 */


void FUN_01a749fc(undefined4 *param_1,long param_2,code *param_3,ulong param_4)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0xffffffff;
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 3) = 0;
  }
  else {
    if ((param_4 & 1) != 0) {
      param_3 = *(code **)(param_3 + *(long *)(param_2 + ((long)param_4 >> 1)));
    }
    puVar1 = (undefined2 *)(*param_3)();
    *(undefined2 *)param_1 = *puVar1;
    *(undefined2 *)((long)param_1 + 2) = puVar1[1];
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(puVar1 + 2);
    *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)puVar1 + 5);
    *(undefined1 *)((long)param_1 + 6) = *(undefined1 *)(puVar1 + 3);
    uVar2 = *(undefined4 *)(puVar1 + 6);
    param_1[2] = *(undefined4 *)(puVar1 + 4);
    param_1[3] = uVar2;
    uVar2 = *(undefined4 *)(puVar1 + 8);
  }
  param_1[4] = uVar2;
  return;
}


