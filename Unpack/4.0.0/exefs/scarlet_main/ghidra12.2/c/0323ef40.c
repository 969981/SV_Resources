/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0323ef40; name: FUN_0323ef40
 */


void FUN_0323ef40(undefined8 param_1,long *param_2,uint param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar2 = PTR_PTR_047d1a50;
  puVar1 = PTR_DAT_047d1a08;
  if (0 < (int)param_3) {
    uVar4 = (ulong)param_3;
    do {
      lVar3 = *param_2;
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x20) = 0;
        if ((-1 < (int)*(uint *)(lVar3 + 0x24)) && (*(long *)(lVar3 + 0x18) != 0)) {
          (**(code **)(*(long *)puVar2 + 0x20))
                    (puVar2,*(long *)(lVar3 + 0x18),(ulong)*(uint *)(lVar3 + 0x24) << 3);
        }
        *(undefined8 *)(lVar3 + 0x18) = 0;
        *(undefined4 *)(lVar3 + 0x24) = 0x80000000;
        (**(code **)(puVar1 + 8))(0,lVar3,0);
      }
      *param_2 = 0;
      param_2 = (long *)((long)param_2 + (long)param_4);
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  return;
}


