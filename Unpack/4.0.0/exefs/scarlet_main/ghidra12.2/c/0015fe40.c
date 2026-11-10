/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0015fe40; name: FUN_0015fe40
 */


void FUN_0015fe40(long param_1,ulong param_2,int param_3,long param_4)

{
  uint3 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  byte *pbVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if ((long)param_2 < 0x10) {
    uVar6 = 0;
    if ((long)param_2 < 1) {
      return;
    }
  }
  else {
    puVar2 = (undefined8 *)(param_1 + 0x20);
    uVar3 = 0;
    do {
      uVar9 = ((undefined8 *)(param_4 + uVar3))[1];
      uVar8 = *(undefined8 *)(param_4 + uVar3);
      uVar1 = CONCAT12((char)((ulong)uVar8 >> 8),(short)uVar8) & 0xff00ff;
      uVar6 = uVar3 + 0x10;
      lVar4 = uVar3 + 0x20;
      puVar2[1] = CONCAT44((int)((ulong)puVar2[1] >> 0x20) * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar9 >> 0x18),
                           (int)puVar2[1] * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar9 >> 0x10));
      *puVar2 = CONCAT44((int)((ulong)*puVar2 >> 0x20) * param_3 +
                         (int)(short)-(ushort)(byte)((ulong)uVar9 >> 8),
                         (int)*puVar2 * param_3 + (int)(short)-(ushort)(byte)uVar9);
      puVar2[3] = CONCAT44((int)((ulong)puVar2[3] >> 0x20) * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar9 >> 0x38),
                           (int)puVar2[3] * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar9 >> 0x30));
      puVar2[2] = CONCAT44((int)((ulong)puVar2[2] >> 0x20) * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar9 >> 0x28),
                           (int)puVar2[2] * param_3 +
                           (int)(short)-(ushort)(byte)((ulong)uVar9 >> 0x20));
      puVar2[-3] = CONCAT44((int)((ulong)puVar2[-3] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x18),
                            (int)puVar2[-3] * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x10));
      puVar2[-4] = CONCAT44((int)((ulong)puVar2[-4] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)(uVar1 >> 0x10),
                            (int)puVar2[-4] * param_3 + (int)(short)-(short)uVar1);
      puVar2[-1] = CONCAT44((int)((ulong)puVar2[-1] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x38),
                            (int)puVar2[-1] * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x30));
      puVar2[-2] = CONCAT44((int)((ulong)puVar2[-2] >> 0x20) * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x28),
                            (int)puVar2[-2] * param_3 +
                            (int)(short)-(ushort)(byte)((ulong)uVar8 >> 0x20));
      puVar2 = puVar2 + 8;
      uVar3 = uVar6;
    } while (lVar4 <= (long)param_2);
    if ((long)param_2 <= (long)uVar6) {
      return;
    }
  }
  uVar3 = ~uVar6;
  if ((param_2 & 1) != 0) {
    lVar4 = uVar6 * 4;
    pbVar5 = (byte *)(param_4 + uVar6);
    uVar6 = uVar6 | 1;
    *(uint *)(param_1 + lVar4) = *(int *)(param_1 + lVar4) * param_3 - (uint)*pbVar5;
  }
  if (uVar3 + param_2 != 0) {
    lVar4 = param_2 - uVar6;
    pbVar5 = (byte *)(param_4 + uVar6 + 1);
    piVar7 = (int *)(param_1 + (uVar6 + 1) * 4);
    do {
      piVar7[-1] = piVar7[-1] * param_3 - (uint)pbVar5[-1];
      lVar4 = lVar4 + -2;
      *piVar7 = *piVar7 * param_3 - (uint)*pbVar5;
      pbVar5 = pbVar5 + 2;
      piVar7 = piVar7 + 2;
    } while (lVar4 != 0);
  }
  return;
}


