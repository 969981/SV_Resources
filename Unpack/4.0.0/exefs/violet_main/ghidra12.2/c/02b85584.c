/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02b85584; name: FUN_02b85584
 */


/* WARNING: Removing unreachable block (ram,0x02b855f8) */

void FUN_02b85584(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_1 + 0x478);
  if (pcVar4 != (code *)0x0) {
    *(undefined8 *)(param_1 + 0x480) = 0;
    *(undefined8 *)(param_1 + 0x488) = 0;
    *(undefined8 *)(param_1 + 0x470) = 0;
    *(undefined8 *)(param_1 + 0x478) = 0;
    (*pcVar4)(param_1 + 0x490);
  }
  puVar3 = PTR_DAT_047db010;
  if (*(code **)(PTR_DAT_047db010 + 0x10) != (code *)0x0) {
    (**(code **)(PTR_DAT_047db010 + 0x10))(PTR_DAT_047db010 + 0x20,param_1 + 0x490);
    uVar1 = *(undefined8 *)(puVar3 + 0x10);
    *(undefined8 *)(param_1 + 0x488) = *(undefined8 *)(puVar3 + 0x18);
    uVar2 = *(undefined8 *)(puVar3 + 8);
    *(undefined8 *)(param_1 + 0x470) = *(undefined8 *)puVar3;
    *(undefined8 *)(param_1 + 0x478) = uVar2;
    *(undefined8 *)(param_1 + 0x480) = uVar1;
  }
  return;
}


