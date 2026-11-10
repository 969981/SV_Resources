/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034b239c; name: FUN_034b239c
 */


void FUN_034b239c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  long *plVar5;
  
  puVar1 = PTR_DAT_047e2fd0;
  puVar2 = (undefined8 *)*param_1;
  puVar3 = puVar2;
  if (*(int *)(param_1 + 1) != 0) {
    do {
      puVar4 = (undefined4 *)*puVar3;
      *puVar4 = 0;
      if (*(long *)(puVar4 + 0xc) != 0) {
        puVar4[0xe] = 0;
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(puVar4 + 0xc) = 0;
        puVar4[0xf] = 0;
      }
      if ((*(byte *)(puVar4 + 10) >> 1 & 1) != 0) {
        plVar5 = *(long **)(puVar4 + 4);
        if (plVar5 != (long *)0x0) {
          if (*(ushort *)(plVar5 + 2) - 1 == 0) {
            if (*plVar5 != 0) {
              *(undefined4 *)(plVar5 + 1) = 0;
              (**(code **)(puVar1 + 0x30))(0);
              *plVar5 = 0;
              *(undefined4 *)((long)plVar5 + 0xc) = 0;
            }
            (**(code **)(puVar1 + 0x30))(0,plVar5);
          }
          else {
            *(short *)(plVar5 + 2) = (short)(*(ushort *)(plVar5 + 2) - 1);
          }
        }
        *(undefined8 *)(puVar4 + 4) = 0;
      }
      if (*(long *)(puVar4 + 0x22) != 0) {
        puVar4[0x24] = 0;
        (**(code **)(puVar1 + 0x30))(0);
        *(undefined8 *)(puVar4 + 0x22) = 0;
        puVar4[0x25] = 0;
      }
      plVar5 = *(long **)(puVar4 + 4);
      if (plVar5 != (long *)0x0) {
        if (*(ushort *)(plVar5 + 2) - 1 == 0) {
          if (*plVar5 != 0) {
            *(undefined4 *)(plVar5 + 1) = 0;
            (**(code **)(puVar1 + 0x30))(0);
            *plVar5 = 0;
            *(undefined4 *)((long)plVar5 + 0xc) = 0;
          }
          (**(code **)(puVar1 + 0x30))(0,plVar5);
        }
        else {
          *(short *)(plVar5 + 2) = (short)(*(ushort *)(plVar5 + 2) - 1);
        }
      }
      (**(code **)(puVar1 + 0x30))(0,puVar4);
      puVar2 = (undefined8 *)*param_1;
      puVar3 = puVar3 + 1;
    } while (puVar3 != puVar2 + *(uint *)(param_1 + 1));
  }
  if (puVar2 != (undefined8 *)0x0) {
    *(undefined4 *)(param_1 + 1) = 0;
    (**(code **)(puVar1 + 0x30))(0,puVar2);
    *param_1 = 0;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
  }
  return;
}


