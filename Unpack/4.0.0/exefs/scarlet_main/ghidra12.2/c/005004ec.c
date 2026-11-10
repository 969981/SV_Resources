/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 005004ec; name: FUN_005004ec
 */


void FUN_005004ec(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  plVar3 = (long *)param_1[2];
  *param_1 = (long)(PTR_DAT_047cdaf8 + 0x10);
  puVar1 = PTR_LAB_047cba48;
  if ((plVar3 != (long *)0x0) && (param_1[1] == 0)) {
    puVar2 = (uint *)plVar3[2];
    if ((puVar2 != (uint *)0x0) && (*plVar3 == 0)) {
      uVar5 = (ulong)*puVar2;
      if (0 < (int)*puVar2) {
        do {
          puVar2 = puVar2 + 2;
          puVar4 = *(undefined8 **)puVar2;
          if (puVar4 != (undefined8 *)0x0) {
            (**(code **)*puVar4)(puVar4);
            FUN_0049e790(puVar1,puVar4);
          }
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
        puVar2 = (uint *)plVar3[2];
      }
      FUN_0049e700(puVar2);
    }
    plVar3[2] = 0;
    FUN_0049e790(PTR_LAB_047cba48,plVar3);
  }
  std::mutex::~mutex((mutex *)(param_1 + 3));
  return;
}


