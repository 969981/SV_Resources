/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034a68b4; name: FUN_034a68b4
 */


void FUN_034a68b4(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = param_1[0x11];
  *param_1 = &PTR_FUN_047c3cb8;
  param_1[1] = &PTR_LAB_047c3f20;
  param_1[4] = &PTR_LAB_047c3f60;
  param_1[7] = &PTR_FUN_047c3ff8;
  puVar1 = PTR_DAT_047e2fd0;
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x40);
    if (plVar2 != (long *)0x0) {
      if (*(ushort *)(plVar2 + 2) - 1 == 0) {
        if (*plVar2 != 0) {
          *(undefined4 *)(plVar2 + 1) = 0;
          (**(code **)(puVar1 + 0x30))(0);
          *plVar2 = 0;
          *(undefined4 *)((long)plVar2 + 0xc) = 0;
        }
        (**(code **)(puVar1 + 0x30))(0,plVar2);
      }
      else {
        *(short *)(plVar2 + 2) = (short)(*(ushort *)(plVar2 + 2) - 1);
      }
    }
    *(undefined8 *)(lVar3 + 0x40) = 0;
  }
  plVar2 = (long *)param_1[0x1d];
  if (plVar2 == (long *)0x0) goto LAB_034a699c;
  if (*plVar2 == 0) {
LAB_034a6980:
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2,plVar2);
  }
  else {
    *(undefined4 *)(plVar2 + 1) = 0;
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(0);
    *plVar2 = 0;
    *(undefined4 *)((long)plVar2 + 0xc) = 0;
    plVar2 = (long *)param_1[0x1d];
    if (plVar2 != (long *)0x0) goto LAB_034a6980;
  }
  param_1[0x1d] = 0;
LAB_034a699c:
  if (param_1[0x1c] != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
  }
  param_1[0x1c] = 0;
  FUN_034aa790(param_1);
  return;
}


