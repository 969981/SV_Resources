/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 007f95c4; name: FUN_007f95c4
 */


void FUN_007f95c4(long param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  float fVar9;
  float fVar10;
  char acStack_1c0 [64];
  char acStack_180 [64];
  char acStack_140 [64];
  char acStack_100 [64];
  char acStack_c0 [64];
  
  FUN_007eaaf4("[Analysis] --------- BEGIN(Pia Connection Info, %d.%03d sec. passed) ---------",
               *(int *)(param_1 + 0x480) / 1000,*(int *)(param_1 + 0x480) % 1000);
  FUN_007eaaf4(
              "[Analysis] StationIndex,  RTT[ms],  RTTMin[ms],  RTTMax[ms],  UnicastPacketLoss[%%],  BroadcastPacketLoss[%%]"
              );
  uVar7 = 0;
  piVar8 = (int *)(param_1 + 0x18);
  do {
    if ((char)piVar8[5] != '\0') {
      uVar5 = piVar8[-2] - piVar8[-3];
      iVar1 = piVar8[-1];
      iVar3 = *piVar8;
      fVar10 = -1.0;
      if (uVar5 != 0) {
        fVar10 = ((float)(uint)(iVar3 - iVar1) * 100.0) / (float)uVar5;
      }
      uVar6 = piVar8[2] - piVar8[1];
      iVar2 = piVar8[3];
      iVar4 = piVar8[4];
      fVar9 = -1.0;
      if (uVar6 != 0) {
        fVar9 = ((float)(uint)(iVar4 - iVar2) * 100.0) / (float)uVar6;
      }
      if (piVar8[-6] < 0) {
        nn::util::SNPrintf(acStack_c0,0x40,"      ---,");
        if (piVar8[-5] < 0) goto LAB_007f97a0;
LAB_007f9734:
        nn::util::SNPrintf(acStack_100,0x40,"        %4d,");
        if (-1 < piVar8[-4]) goto LAB_007f974c;
LAB_007f97b8:
        nn::util::SNPrintf(acStack_140,0x40,"         ---,");
        if (0.0 <= fVar10) goto LAB_007f97d0;
LAB_007f9764:
        nn::util::SNPrintf(acStack_180,0x40,"        ---");
        if (fVar9 < 0.0) goto LAB_007f97f0;
LAB_007f9658:
        nn::util::SNPrintf(acStack_1c0,0x40,"       %6.2f",(double)fVar9);
      }
      else {
        nn::util::SNPrintf(acStack_c0,0x40,"     %4d,");
        if (-1 < piVar8[-5]) goto LAB_007f9734;
LAB_007f97a0:
        nn::util::SNPrintf(acStack_100,0x40,"         ---,");
        if (piVar8[-4] < 0) goto LAB_007f97b8;
LAB_007f974c:
        nn::util::SNPrintf(acStack_140,0x40,"        %4d,");
        if (fVar10 < 0.0) goto LAB_007f9764;
LAB_007f97d0:
        nn::util::SNPrintf(acStack_180,0x40,"     %6.2f",(double)fVar10);
        if (0.0 <= fVar9) goto LAB_007f9658;
LAB_007f97f0:
        nn::util::SNPrintf(acStack_1c0,0x40,"          ---");
      }
      FUN_007eaaf4("[Analysis]         0x%02x,%s%s%s%s(%4d/%4d),%s(%4d/%4d)",uVar7 & 0xffffffff,
                   acStack_c0,acStack_100,acStack_140,acStack_180,iVar3 - iVar1,uVar5,acStack_1c0,
                   iVar4 - iVar2,uVar6);
    }
    uVar7 = uVar7 + 1;
    piVar8 = piVar8 + 0xc;
    if (uVar7 == 0x18) {
      FUN_007eaaf4("[Analysis] ------------------------------- END -------------------------------")
      ;
      return;
    }
  } while( true );
}


