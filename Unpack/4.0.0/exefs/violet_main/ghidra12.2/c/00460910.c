/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00460910; name: FUN_00460910
 */


void FUN_00460910(ulong *param_1,undefined1 *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar6 = param_1[0x1c];
  if (uVar6 != 0) {
    *(undefined1 *)((long)param_1 + uVar6 + 0xd0) = 1;
    if (uVar6 + 1 < 0x10) {
      memset((void *)((long)param_1 + uVar6 + 0xd1),0,0xf - uVar6);
    }
    FUN_00460840(param_1,param_1 + 0x1a,0x10,0);
  }
  uVar6 = *param_1;
  uVar4 = param_1[1];
  uVar8 = param_1[2] + (ulong)CARRY8((ulong)(0xfffffffffffffffa < uVar6),uVar4) >> 2;
  uVar9 = -uVar8;
  uVar8 = uVar8 - 1;
  uVar7 = uVar8 & uVar6 | uVar9 & uVar6 + 5;
  uVar3 = param_1[0x18];
  uVar5 = param_1[0x19];
  lVar1 = uVar3 + uVar7;
  param_2[1] = (char)((ulong)lVar1 >> 8);
  param_2[2] = (char)((ulong)lVar1 >> 0x10);
  param_2[3] = (char)((ulong)lVar1 >> 0x18);
  param_2[4] = (char)((ulong)lVar1 >> 0x20);
  param_2[5] = (char)((ulong)lVar1 >> 0x28);
  *param_2 = (char)lVar1;
  param_2[7] = (char)((ulong)lVar1 >> 0x38);
  lVar2 = uVar5 + (uVar8 & uVar4 | uVar9 & (0xfffffffffffffffa < uVar6) + uVar4) +
          (ulong)CARRY8(uVar3,uVar7);
  param_2[9] = (char)((ulong)lVar2 >> 8);
  param_2[10] = (char)((ulong)lVar2 >> 0x10);
  param_2[0xb] = (char)((ulong)lVar2 >> 0x18);
  param_2[0xc] = (char)((ulong)lVar2 >> 0x20);
  param_2[8] = (char)lVar2;
  param_2[0xd] = (char)((ulong)lVar2 >> 0x28);
  param_2[6] = (char)((ulong)lVar1 >> 0x30);
  param_2[0xe] = (char)((ulong)lVar2 >> 0x30);
  param_2[0xf] = (char)((ulong)lVar2 >> 0x38);
  FUN_00453300(param_1,0xf8);
  return;
}


