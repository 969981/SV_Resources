/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01ebdd70; name: FUN_01ebdd70
 */


void FUN_01ebdd70(long param_1,long *param_2)

{
  byte bVar1;
  short sVar2;
  byte bVar3;
  short sVar4;
  byte bVar5;
  ulong uVar6;
  code *pcVar7;
  ushort local_50 [4];
  byte local_48 [2];
  short local_46;
  byte local_44;
  short local_42;
  ushort local_28 [2];
  byte local_24 [4];
  
  local_48[0] = 0;
  local_46 = 0;
  local_44 = 0;
  local_42 = 0;
  if ((*param_2 != 0) &&
     (uVar6 = FUN_01ebf39c(*param_2,local_48), sVar4 = local_42, bVar3 = local_44, sVar2 = local_46,
     bVar1 = local_48[0], (uVar6 & 1) != 0)) {
    local_28[0] = local_48[0] & 3 | local_46 << 2;
    local_50[0] = local_44 & 3 | local_42 << 2;
    bVar5 = FUN_01695a1c(param_1,local_28,local_50,0);
    if (((*(char *)(param_1 + 0x2c0) != '\0') &&
        (((*(byte *)(param_1 + 0x2d8) == bVar1 && (*(short *)(param_1 + 0x2da) == sVar2)) &&
         (*(byte *)(param_1 + 0x2dc) == bVar3)))) && (*(short *)(param_1 + 0x2de) == sVar4)) {
      if (*(code **)(param_1 + 0x2f0) != (code *)0x0) {
        local_24[0] = bVar5 & 1;
        (**(code **)(param_1 + 0x2f0))(param_1 + 0x310,local_24);
        if (*(char *)(param_1 + 0x2c0) == '\0') {
          return;
        }
      }
      pcVar7 = *(code **)(param_1 + 0x2f8);
      if (pcVar7 != (code *)0x0) {
        *(undefined8 *)(param_1 + 0x300) = 0;
        *(undefined8 *)(param_1 + 0x308) = 0;
        *(undefined8 *)(param_1 + 0x2f0) = 0;
        *(undefined8 *)(param_1 + 0x2f8) = 0;
        (*pcVar7)(param_1 + 0x310);
      }
      *(undefined1 *)(param_1 + 0x2c0) = 0;
    }
  }
  return;
}


