/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c16c0; name: FUN_034c16c0
 */


void FUN_034c16c0(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined4 local_50 [2];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_30;
  undefined1 local_2c;
  undefined8 local_28;
  
  if ((int)param_1[0x24] != 0) {
    lVar2 = param_1[0x23];
    do {
      (**(code **)(**(long **)(lVar2 + 8) + 0x10))();
      lVar2 = lVar2 + 0x10;
    } while (lVar2 != param_1[0x23] + (ulong)*(uint *)(param_1 + 0x24) * 0x10);
  }
  *(undefined4 *)(param_1 + 0x24) = 0;
  if ((long *)param_1[0x25] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x25] + 0x10))();
    param_1[0x25] = 0;
  }
  puVar1 = PTR_DAT_047e2fe8;
  if ((*(byte *)((long)param_1 + 0x146) & 1) != 0) {
    if (*(long *)PTR_DAT_047e2fe8 != 0) {
      FUN_0345728c(*(long *)PTR_DAT_047e2fe8,param_1);
      FUN_0345706c(*(undefined8 *)puVar1,param_1);
    }
    local_34 = 0;
    local_28 = 0;
    local_2c = 0;
    local_38 = 4;
    local_50[0] = 0;
    local_30 = 0;
    local_48 = 0;
    uStack_40 = 0;
    (**(code **)(*param_1 + 0x98))(param_1,local_50);
  }
  return;
}


