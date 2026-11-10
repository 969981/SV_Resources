/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0344dbc0; name: FUN_0344dbc0
 */


void FUN_0344dbc0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar2 = param_1[0xd];
  *param_1 = &PTR_FUN_047c0630;
  puVar1 = PTR_DAT_047e2fd0;
  if (lVar2 != 0) {
    do {
      if (*(long *)(lVar2 + 0x10) == 0) {
        param_1[0xc] = 0;
        param_1[0xd] = 0;
      }
      else {
        param_1[0xd] = *(long *)(lVar2 + 0x10);
      }
      (**(code **)(puVar1 + 0x30))(0);
      lVar2 = param_1[0xd];
    } while (lVar2 != 0);
  }
  lVar2 = param_1[0xb];
  if (lVar2 != 0) {
    puVar3 = *(undefined8 **)(lVar2 + 8);
    if (puVar3 == (undefined8 *)0x0 || puVar3 == param_1) {
      puVar4 = (undefined8 *)0x0;
      puVar5 = puVar3;
    }
    else {
      puVar5 = puVar3;
      do {
        puVar4 = puVar5;
        puVar5 = (undefined8 *)puVar4[1];
      } while (puVar5 != (undefined8 *)0x0 && puVar5 != param_1);
    }
    if (puVar5 != (undefined8 *)0x0) {
      if (puVar5 == puVar3) {
        *(undefined8 *)(lVar2 + 8) = puVar5[1];
      }
      else {
        puVar4[1] = puVar5[1];
      }
    }
  }
  FUN_0344d8a0(param_1);
  return;
}


