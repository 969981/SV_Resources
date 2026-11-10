/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00a4e034; name: FUN_00a4e034
 */


void FUN_00a4e034(int *param_1,long param_2,uint param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (*(int *)(param_2 + 0x64b8) == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 3;
    param_1[6] = 3;
    param_1[7] = 0;
    if ((int)(uint)*(byte *)(param_2 + 0x622a) <
        (int)((ulong)(*(long *)(param_2 + 0x61f8) - *(long *)(param_2 + 0x61f0)) >> 4)) {
      piVar2 = (int *)(*(long *)(param_2 + 0x61f0) + (ulong)*(byte *)(param_2 + 0x622a) * 0x10);
      uVar10 = (ulong)param_3;
      iVar7 = piVar2[1];
      iVar11 = piVar2[2];
      iVar3 = piVar2[3];
      param_2 = param_2 + (long)*piVar2 * 0x18;
      local_48 = *(undefined8 *)(param_2 + 0x2c);
      local_40 = *(undefined8 *)(param_2 + 0x34);
      uStack_38 = *(undefined8 *)(param_2 + 0x3c);
      *param_1 = *piVar2;
      if (param_3 < 3) {
        uVar9 = (uint)*(ushort *)((long)&local_48 + uVar10 * 2 + 4);
      }
      else {
        uVar9 = 0;
      }
      param_1[1] = uVar9;
      param_1[2] = iVar7;
      iVar7 = FUN_00a64a1c(&local_48);
      param_1[3] = iVar7;
      param_1[4] = iVar11;
      uVar8 = FUN_00a65174(&local_48,uVar10,0);
      iVar11 = 0;
      if ((uVar8 & 1) == 0) {
        iVar11 = 1;
        uVar8 = FUN_00a65174(&local_48,uVar10,1);
        if ((uVar8 & 1) == 0) {
          uVar10 = FUN_00a65174(&local_48,uVar10,2);
          iVar11 = 2;
          if ((uVar10 & 1) == 0) {
            iVar11 = 3;
          }
        }
      }
      param_1[5] = iVar11;
      param_1[6] = param_3;
      param_1[7] = iVar3;
    }
  }
  else {
    puVar1 = (undefined8 *)
             (*(long *)(param_2 + 0x6480) +
             ((ulong)(~(uint)*(ushort *)(param_2 + 0x6228) +
                     ((uint)(*(int *)(param_2 + 0x6488) - (int)*(long *)(param_2 + 0x6480)) >> 5)) &
             0xffff) * 0x20);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    uVar6 = puVar1[3];
    *(undefined8 *)(param_1 + 4) = puVar1[2];
    *(undefined8 *)(param_1 + 6) = uVar6;
    *(undefined8 *)param_1 = uVar4;
    *(undefined8 *)(param_1 + 2) = uVar5;
  }
  return;
}


